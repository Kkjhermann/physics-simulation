import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15
import "UI"

Window {
    width: 1200
    height: 800
    visible: true
    title: "Physics Simulation Engine"

    property int currentMode: 0

    function viewForMode(mode) {
        if (mode === 0)
            return mechanics
        else if (mode === 1)
            return waves
        else
            return thermo
    }

    Column {
        anchors.fill: parent
        spacing: 0

        TopMenu {
            id: topMenu
            onModeSelected: currentMode = mode
        }

        Loader {
            id: loader
            width: parent.width
            height: parent.height - topMenu.height
            sourceComponent: viewForMode(currentMode)
        }
    }

    Component {
        id: mechanics
        MechanicsView { }
    }

    Component {
        id: waves
        WaveView { }
    }

    Component {
        id: thermo
        ThermoView { }
    }
}
