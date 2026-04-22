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
                        value: 5
                        stepSize: 1
                        to: 50
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
                        value: 10
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
                        value: 18
                        to: 180
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
                        }

                        Button {
                            id: button1
                            text: qsTr("Stop")
                            Layout.fillWidth: true
                        }
                    }

                    Text {
                        id: text4
                        y: 188
                        width: 102
                        height: 35
                        text: qsTr("Mass (Kg) :")
                        anchors.left: parent.left
                        font.pixelSize: 20
                    }

                    Slider {
                        id: slider3
                        x: 165
                        y: 179
                        width: 300
                        value: 10
                        to: 100
                        stepSize: 1
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
                        value: 0.1
                        stepSize: 0.01
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
                        x: 391
                        y: 25
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
                    }

                    Rectangle {
                        id: ground
                        x: 0
                        y: 794
                        width: 895
                        height: 6
                        color: "#ffffff"
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                    }
                }
            }
        }
    }


}
