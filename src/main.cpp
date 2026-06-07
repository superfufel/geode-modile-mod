#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    int deaths = 0;

    void destroyPlayer(PlayerObject* player, GameObject* obj) {
        PlayLayer::destroyPlayer(player, obj);

        deaths++;

        if (deaths >= 10) {
            log::info("RAGE MODE");
        }
        else if (deaths >= 5) {
            log::info("FRUSTRATION MODE");
        }
        else {
            log::info("CALM MODE");
        }
    }
};
