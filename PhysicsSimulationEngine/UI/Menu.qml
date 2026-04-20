import QtQuick 2.15

import QtQuick
import QtQuick.Controls

Rectangle {
    width: parent.width
    height: 80
    color: "#222222"

    signal modeSelected(int mode)

    Row {
        anchors.centerIn: parent
        spacing: 20

        Button {
            text: "Mécanique"
            onClicked: modeSelected(0)
        }

        Button {
            text: "Ondes"
            onClicked: modeSelected(1)
        }

        Button {
            text: "Thermo"
            onClicked: modeSelected(2)
        }
    }
}
