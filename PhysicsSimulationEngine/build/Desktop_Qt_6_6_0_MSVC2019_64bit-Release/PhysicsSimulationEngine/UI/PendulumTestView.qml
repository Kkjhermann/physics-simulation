import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    anchors.fill: parent
    color: "#232938"
    radius: 16

    RowLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 20

        Rectangle {
            Layout.preferredWidth: 350
            Layout.fillHeight: true
            radius: 12
            color: "#2b3142"

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 20
                spacing: 20

                Text {
                    text: "Pendulum Parameters"
                    color: "white"
                    font.pixelSize: 24
                    font.bold: true
                }

                Slider {
                    Layout.fillWidth: true
                    from: 50
                    to: 300
                    value: 150
                }

                Slider {
                    Layout.fillWidth: true
                    from: -90
                    to: 90
                    value: 30
                }

                Slider {
                    Layout.fillWidth: true
                    from: 1
                    to: 20
                    value: 5
                }
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            radius: 12
            color: "#151922"

            Item {
                anchors.fill: parent

                Rectangle {
                    width: 4
                    height: 200
                    color: "white"
                    anchors.horizontalCenter: parent.horizontalCenter
                    y: 50
                }

                Rectangle {
                    width: 50
                    height: 50
                    radius: 25
                    color: "#4a90ff"
                    anchors.horizontalCenter: parent.horizontalCenter
                    y: 240
                }
            }
        }
    }
}
