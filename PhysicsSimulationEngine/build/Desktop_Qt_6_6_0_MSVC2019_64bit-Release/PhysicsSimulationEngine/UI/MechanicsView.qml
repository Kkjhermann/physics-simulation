import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    anchors.fill: parent
    color: "#0f1115"

    property string selectedTest: "pendulum"

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 20

        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: 80
            radius: 16
            color: "#1b1f2a"

            RowLayout {
                anchors.fill: parent
                anchors.margins: 20

                Text {
                    text: "Mechanical Tests"
                    color: "white"
                    font.pixelSize: 28
                    font.bold: true
                }

                Item {
                    Layout.fillWidth: true
                }

                ComboBox {
                    id: testSelector
                    width: 220
                    model: [
                        "Pendulum Test",
                        "Spring Test"
                    ]

                    onCurrentTextChanged: {
                        if (currentText === "Pendulum Test")
                            selectedTest = "pendulum"
                        else
                            selectedTest = "spring"
                    }
                }
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            radius: 18
            color: "#1b1f2a"
            border.color: "#2c3344"
            border.width: 1

            Loader {
                anchors.fill: parent
                anchors.margins: 15
                source: selectedTest === "pendulum"
                        ? "PendulumTestView.qml"
                        : "SpringTestView.qml"
            }
        }
    }
}
