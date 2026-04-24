import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    id: topBar
    height: 80
    width: parent.width
    color: "#181818"

    signal modeSelected(int mode)

    property int selectedMode: 0

    Rectangle {
        anchors.bottom: parent.bottom
        width: parent.width
        height: 1
        color: "#2d2d2d"
    }

    RowLayout {
        anchors.centerIn: parent
        spacing: 16

        Repeater {
            model: [
                { label: "Mécanique", index: 0 },
                { label: "Ondes", index: 1 },
                { label: "Thermo", index: 2 },
                { label: "Cinématique", index: 3 }
            ]

            delegate: Button {
                text: modelData.label

                Layout.preferredWidth: 140
                Layout.preferredHeight: 44

                font.pixelSize: 15
                font.bold: topBar.selectedMode === modelData.index

                background: Rectangle {
                    radius: 12
                    color: topBar.selectedMode === modelData.index
                           ? "#2d6cdf"
                           : (parent.hovered ? "#2a2a2a" : "#222222")

                    border.width: 1
                    border.color: topBar.selectedMode === modelData.index
                                  ? "#4a82ff"
                                  : "#333333"

                    Behavior on color {
                        ColorAnimation { duration: 150 }
                    }
                }

                contentItem: Text {
                    text: parent.text
                    color: "white"
                    font: parent.font
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                onClicked: {
                    topBar.selectedMode = modelData.index
                    topBar.modeSelected(modelData.index)
                }
            }
        }
    }
}
