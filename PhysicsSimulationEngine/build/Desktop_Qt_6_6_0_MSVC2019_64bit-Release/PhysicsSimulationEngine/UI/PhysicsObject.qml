import QtQuick 2.15

Item {
    id: root

    property string shape: "circle"
    property color objectColor: "#eaeaea"
    property real size: 40

    width: size
    height: size

    Rectangle {
        anchors.fill: parent
        color: root.objectColor
        radius: root.shape === "circle" ? width / 2 : 0
    }
}
