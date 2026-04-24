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
                    text: "Spring Parameters"
                    color: "white"
                    font.pixelSize: 24
                    font.bold: true
                }

                Slider {
                    Layout.fillWidth: true
                    from: 1
                    to: 100
                    value: 20
                }

                Slider {
                    Layout.fillWidth: true
                    from: 1
                    to: 20
                    value: 5
                }

                Slider {
                    Layout.fillWidth: true
                    from: 0
                    to: 100
                    value: 40
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
                    width: 10
                    height: 180
                    color: "#cccccc"
                    anchors.horizontalCenter: parent.horizontalCenter
                    y: 50
                }

                Rectangle {
                    width: 70
                    height: 70
                    color: "#4a90ff"
                    anchors.horizontalCenter: parent.horizontalCenter
                    y: 250
                }
            }
        }
    }
}
