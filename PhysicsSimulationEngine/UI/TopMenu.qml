import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    height: 80
    width: parent.width
    color: "#222222"

    signal modeSelected(int mode)

    Row {
        anchors.centerIn: parent
        spacing: 20

        Button { text: "Mécanique"; onClicked: modeSelected(0) }
        Button { text: "Ondes"; onClicked: modeSelected(1) }
        Button { text: "Thermo"; onClicked: modeSelected(2) }
    }
}
