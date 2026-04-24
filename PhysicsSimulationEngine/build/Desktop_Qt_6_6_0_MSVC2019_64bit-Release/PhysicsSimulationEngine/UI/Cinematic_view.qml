import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    width: 1400
    height: 800
    color: "#0f1115"

    RowLayout {
        anchors.fill: parent
        spacing: 20
        anchors.margins: 20

        /*
            ========================
            LEFT CONTROL PANEL
            ========================
        */
        Rectangle {
            id: rect_settings
            Layout.preferredWidth: 420
            Layout.fillHeight: true
            radius: 18
            color: "#1b1f2a"
            border.color: "#2c3344"
            border.width: 1

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 20
                spacing: 20

                Text {
                    text: "Simulation Controls"
                    color: "white"
                    font.pixelSize: 28
                    font.bold: true
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    radius: 14
                    color: "#232938"

                    ColumnLayout {
                        anchors.fill: parent
                        anchors.margins: 20
                        spacing: 18

                        /*
                            Reusable slider rows
                        */

                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Gravity"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                stepSize: 1
                                to: 50
                                value: simulation.gravity
                                onValueChanged: simulation.gravity = value
                            }

                            Text {
                                text: simulation.gravity.toFixed(2) + " m/s²"
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 100
                            }
                        }

                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Speed"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                value: simulation.initialSpeed
                                onValueChanged: simulation.initialSpeed = value
                                to: 100
                                stepSize: 1
                            }

                            Text {
                                text: simulation.initialSpeed.toFixed(2) + " m/s"
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 100
                            }
                        }

                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Angle"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                value: simulation.initialAngle
                                onValueChanged: simulation.initialAngle = value
                                from: -180
                                to: 180
                                stepSize: 1
                            }

                            Text {
                                text: simulation.initialAngle.toFixed(2) + "°"
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 100
                            }
                        }

                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Mass"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                value: simulation.mass
                                onValueChanged: simulation.mass = value
                                from: 1
                                to: 50
                                stepSize: 1
                            }

                            Text {
                                text: simulation.mass.toFixed(2) + " Kg"
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 100
                            }
                        }

                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Ratio"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                value: simulation.ratio
                                onValueChanged: simulation.ratio = value
                                from: 0.01
                                to: 1
                                stepSize: 0.1
                            }

                            Text {
                                text: simulation.ratio.toFixed(2) + " cm/pixel"
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 100
                            }
                        }
                        RowLayout {
                            Layout.fillWidth: true

                            Text {
                                text: "Air Friction"
                                color: "white"
                                font.pixelSize: 18
                                Layout.preferredWidth: 100
                            }

                            Slider {
                                Layout.fillWidth: true
                                from: 0
                                to: 2
                                stepSize: 0.01
                                value: simulation.airFriction
                                onValueChanged: simulation.airFriction = value
                            }

                            Text {
                                text: simulation.airFriction.toFixed(2)
                                color: "#8ab4ff"
                                font.pixelSize: 16
                                Layout.preferredWidth: 80
                            }
                        }

                        Item {
                            Layout.fillHeight: true
                        }

                        RowLayout {
                            Layout.fillWidth: true
                            spacing: 15

                            Button {
                                text: "▶ Start"
                                Layout.fillWidth: true
                                height: 50

                                background: Rectangle {
                                    radius: 12
                                    color: "#1e8e3e"
                                }

                                contentItem: Text {
                                    text: parent.text
                                    color: "white"
                                    font.pixelSize: 18
                                    horizontalAlignment: Text.AlignHCenter
                                    verticalAlignment: Text.AlignVCenter
                                }

                                onClicked: simulation.start()
                            }

                            Button {
                                text: "■ Stop"
                                Layout.fillWidth: true
                                height: 50

                                background: Rectangle {
                                    radius: 12
                                    color: "#d93025"
                                }

                                contentItem: Text {
                                    text: parent.text
                                    color: "white"
                                    font.pixelSize: 18
                                    horizontalAlignment: Text.AlignHCenter
                                    verticalAlignment: Text.AlignVCenter
                                }

                                onClicked: simulation.stop()
                            }
                        }
                    }
                }
            }
        }

        /*
            ========================
            RIGHT SIMULATION VIEW
            ========================
        */
        Rectangle {
            id: rect_view
            Layout.fillWidth: true
            Layout.fillHeight: true
            radius: 18
            color: "#1b1f2a"
            border.color: "#2c3344"
            border.width: 1

            Item {
                id: sceneRoot
                anchors.fill: parent
                anchors.margins: 20

                Rectangle {
                    id: objet
                    x: simulation.x - width / 2
                    y: simulation.y - height / 2
                    width: 40
                    height: 40
                    radius: 20
                    color: "#ffffff"
                    border.color: "#5f9cff"
                    border.width: 2

                    property real initialAngle: 0
                    property real currentVelocity: 0
                    property real initialVelocity: 0
                    property real mass: 1

                    MouseArea {
                        anchors.fill: parent
                        drag.target: parent

                        onPositionChanged: {
                            simulation.x = objet.x + objet.width / 2
                            simulation.y = objet.y + objet.height / 2
                        }

                        enabled: !simulation.running
                    }
                }

                Rectangle {
                    id: left_wall
                    width: 6
                    color: "#888"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.bottom: ground.top

                    Binding {
                        target: simulation
                        property: "left_wall"
                        value: left_wall.x + objet.width / 2
                    }
                }

                Rectangle {
                    id: right_wall
                    width: 6
                    color: "#888"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.bottom: ground.top

                    Binding {
                        target: simulation
                        property: "right_wall"
                        value: right_wall.x - objet.width / 2
                    }
                }

                Rectangle {
                    id: ground
                    height: 6
                    color: "#ffffff"
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.bottom: parent.bottom

                    Binding {
                        target: simulation
                        property: "ground"
                        value: ground.y - objet.height / 2
                    }
                }

                VectorArrow {
                    id: velocityVector
                    x: objet.x + objet.width / 2
                    y: objet.y + objet.height / 2 - 10
                    arrowLength: simulation.speedMagnitude * (1 / simulation.ratio) * 0.1
                    arrowAngle: -simulation.speedAngle
                    arrowColor: "#4a90ff"
                    showLabel: true
                    labelText: "V = " + simulation.speedMagnitude.toFixed(2) + " m/s"
                }

                VectorArrow {
                    id: gravityVector
                    x: 60
                    y: 60
                    arrowLength: 50
                    arrowAngle: 90
                    arrowColor: "#ff4d4d"
                    showLabel: true
                    labelText: "g = " + simulation.gravity.toFixed(2) + " m/s²"
                }
            }
        }
    }
}
