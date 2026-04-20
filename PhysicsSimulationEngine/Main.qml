import QtQuick
import QtQuick.Controls

Window {
    width: 1200
    height: 800
    visible: true
    title: "Physics Simulation Engine"

    property int currentMode: 0

    Column {
        anchors.fill: parent

        Menu {
            id: menu
            onModeSelected: function(mode) {
                currentMode = mode
            }
        }

        Loader {
            id: loader
            anchors.fill: parent
            sourceComponent: currentMode === 0 ? mechanics :
                             currentMode === 1 ? waves :
                             thermo
        }
    }

    Component { id: mechanics; MechanicsView {} }
    Component { id: waves; WaveView {} }
    Component { id: thermo; ThermoView {} }
}
