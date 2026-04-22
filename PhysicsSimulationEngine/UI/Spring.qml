import QtQuick 2.15

Item {
    id: root

    property real springLength: 100
    property int coils: 8
    property color springColor: "yellow"

    width: springLength
    height: 20

    Canvas {
        anchors.fill: parent

        onPaint: {
            var ctx = getContext("2d")
            ctx.clearRect(0, 0, width, height)

            ctx.strokeStyle = springColor
            ctx.lineWidth = 2

            ctx.beginPath()

            let step = width / coils

            ctx.moveTo(0, height / 2)

            for (let i = 1; i <= coils; i++) {
                let x = i * step
                let y = (i % 2 === 0) ? 5 : 15
                ctx.lineTo(x, y)
            }

            ctx.stroke()
        }
    }
}
