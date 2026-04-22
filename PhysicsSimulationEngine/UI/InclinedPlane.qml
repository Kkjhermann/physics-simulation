import QtQuick 2.15

Item {
    id: root

    property real planeWidth: 300
    property real planeHeight: 20
    property real angle: 30

    width: planeWidth
    height: planeHeight
    rotation: -angle

    Rectangle {
        anchors.fill: parent
        color: "#777777"
    }
}
