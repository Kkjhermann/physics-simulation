import QtQuick 2.15

Item {
    id: root

    property color arrowColor: "#0a26cc"
    property real arrowLength: 100
    property real arrowThickness: 3
    property real arrowAngle: 0
    property bool showLabel: false
    property string labelText: ""

    width: arrowLength + 10
    height: 20

    transformOrigin: Item.Left
    rotation: arrowAngle

    Rectangle {
        id: shaft
        x: 0
        y: parent.height / 2 - root.arrowThickness / 2
        width: root.arrowLength
        height: root.arrowThickness
        color: root.arrowColor
        radius: root.arrowThickness / 2
    }

    Canvas {
        id: arrowHead
        x: shaft.width
        y: parent.height / 2 - 6
        width: 12
        height: 12

        onPaint: {
            var ctx = getContext("2d")
            ctx.clearRect(0, 0, width, height)

            ctx.fillStyle = root.arrowColor
            ctx.beginPath()
            ctx.moveTo(0, 0)
            ctx.lineTo(width, height / 2)
            ctx.lineTo(0, height)
            ctx.closePath()
            ctx.fill()
        }
    }

    Text {
        visible: root.showLabel
        text: root.labelText
        color: root.arrowColor
        anchors.bottom: parent.top
        anchors.left: parent.left
        font.pixelSize: 14
    }
}
