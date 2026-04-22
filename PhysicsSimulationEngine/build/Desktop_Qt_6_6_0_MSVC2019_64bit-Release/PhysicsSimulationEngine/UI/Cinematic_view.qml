import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    width: 1400
    height: 800
    color: "#121212"

    RowLayout {
        id: rowLayout
        anchors.fill: parent
        anchors.leftMargin: 0
        anchors.rightMargin: 0
        anchors.topMargin: 0
        anchors.bottomMargin: 0

        Rectangle {
            id: rect_settings
            width: 500
            height: 200
            color: "#ffffff"
            Layout.fillHeight: true

            ColumnLayout {
                id: columnLayout
                anchors.fill: parent

                Rectangle {
                    id: settings
                    width: 200
                    height: 200
                    color: "#ffffff"
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    Text {
                        id: text1
                        y: 29
                        width: 93
                        height: 30
                        text: qsTr("Gravity (m/s²) :")
                        anchors.left: parent.left
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider
                        x: 165
                        y: 24
                        width: 300
                        stepSize: 1
                        to: 50
                        value: simulation.gravity
                        onValueChanged: simulation.gravity = value

                    }

                    Text {
                        id: text2
                        y: 89
                        width: 162
                        height: 32
                        text: qsTr("Initial speed (m/s) :")
                        anchors.left: parent.left
                        anchors.leftMargin: -3
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider1
                        x: 165
                        y: 85
                        width: 300
                        value: simulation.initialSpeed
                        onValueChanged: simulation.initialSpeed = value
                        to: 100
                        stepSize: 1
                    }

                    Text {
                        id: text3
                        y: 140
                        width: 162
                        height: 26
                        text: qsTr("Initial angle (°) :")
                        anchors.left: parent.left
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider2
                        x: 165
                        y: 140
                        width: 300
                        value: simulation.initialAngle
                        onValueChanged: simulation.initialAngle = value
                        to: 180
                        from: -180
                        stepSize: 1
                    }

                    RowLayout {
                        id: rowLayout1
                        y: 270
                        width: 500
                        height: 100
                        anchors.left: parent.left
                        anchors.leftMargin: 0

                        Button {
                            id: button
                            text: qsTr("Start")
                            icon.color: "#262a27"
                            highlighted: false
                            flat: false
                            Layout.fillWidth: true
                            onClicked: simulation.start()
                        }

                        Button {
                            id: button1
                            text: qsTr("Stop")
                            Layout.fillWidth: true
                            onClicked: simulation.stop()
                        }
                    }

                    Text {
                        id: text4
                        y: 188
                        width: 102
                        height: 35
                        text: qsTr("Mass (g) :")
                        anchors.left: parent.left
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider3
                        x: 165
                        y: 179
                        width: 300
                        value: simulation.mass
                        onValueChanged: simulation.mass = value
                        from: 100
                        to: 1000
                        stepSize: 100
                    }

                    Text {
                        id: text5
                        y: 241
                        width: 168
                        height: 23
                        text: qsTr("Ratio (cm/pixel) :")
                        anchors.left: parent.left
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider4
                        x: 165
                        y: 233
                        width: 300
                        value: simulation.ratio
                        onValueChanged: simulation.ratio = value
                        to: 1
                        from: 0.01
                        stepSize: 0.1
                    }
                }

                Rectangle {
                    id: todo
                    width: 200
                    height: 200
                    color: "#ffffff"
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                }
            }
        }

        Rectangle {
            id: rect_view
            width: 200
            height: 200
            color: "#121212"
            border.width: 1
            Layout.fillWidth: true
            Layout.fillHeight: true

            GridLayout {
                id: gridLayout
                anchors.fill: parent

                Item {
                    id: sceneRoot
                    width: 200
                    height: 200
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    Rectangle {
                        id: objet
                        x: simulation.x - width / 2
                        y: simulation.y - height / 2
                        width: 40
                        height: 40
                        opacity: 0.582
                        color: "#eaeaea"
                        radius: 20
                        border.color: "#00000000"
                        border.width: 8
                        property real initialAngle: 0
                        property real currentVelocity: 0
                        property real initialVelocity: 0
                        property real mass: 1

                        MouseArea {
                            id: mouseArea
                            x: 0
                            y: 0
                            anchors.fill: parent
                            drag.target: parent

                            onPositionChanged: {
                                simulation.x = objet.x + objet.width / 2
                                simulation.y = objet.y + objet.height / 2
                            }
                            enabled: !simulation.running
                        }
                    }

                    GridLayout {
                        id: gridLayout1
                        anchors.fill: parent

                        Rectangle {
                            id: left_wall
                            width: 6
                            height: 200
                            color: "#777777"
                            anchors.left: parent.left
                            Layout.fillHeight: true
                            Binding {
                                target: simulation
                                property: "left_wall"
                                value: left_wall.x + objet.width / 2
                            }
                        }

                        Rectangle {
                            id: right_wall
                            width: 6
                            height: 200
                            color: "#777777"
                            anchors.right: parent.right
                            Layout.fillHeight: true
                            Binding {
                                target: simulation
                                property: "right_wall"
                                value: right_wall.x - objet.width / 2
                            }
                        }
                    }

                    ColumnLayout {
                        id: columnLayout1
                        anchors.fill: parent

                        Rectangle {
                            id: ground
                            width: 895
                            height: 6
                            color: "#ffffff"
                            anchors.bottom: parent.bottom
                            Layout.rowSpan: 1
                            Layout.columnSpan: 1
                            Layout.fillWidth: true
                            Binding {
                                target: simulation
                                property: "ground"
                                value: ground.y - objet.height / 2
                            }
                        }
                    }
                    VectorArrow {
                        id: velocityVector
                        x: objet.x + objet.width / 2
                        y: objet.y + objet.height / 2 - 10
                        arrowLength: simulation.speedMagnitude * (1 / simulation.ratio) * 0.1
                        arrowAngle: -simulation.speedAngle
                        arrowColor: "#0a26cc"
                        showLabel: true
                        labelText: "V = " + simulation.speedMagnitude.toFixed(2) + " m/s"
                    }
                    VectorArrow {
                        id: gravityVector
                        x: 50
                        y: 50
                        //arrowLength: simulation.gravity * 5
                        arrowLength: 10 * 5
                        arrowAngle: 90
                        arrowColor: "#aa0000"
                        showLabel: true
                        labelText: "g = " + simulation.gravity.toFixed(2) + " m/s²"
                    }
                    Spring {
                        x: 300
                        y: 500
                        springLength: 100
                        coils: 20
                    }
                    Rope {
                        x: 30
                        y: 50
                        ropeLength: 100
                    }
                }
            }
        }
    }


}
