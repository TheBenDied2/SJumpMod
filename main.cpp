#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void update(float dt) {
        PlayLayer::update(dt);

        // Натискання клавіші S
        if (getKeyState(KEY_S, false)) {
            this->pushButton(1, true);
        }

        // Відпускання клавіші S
        if (!getKeyState(KEY_S, true)) {
            this->releaseButton(1, true);
        }
    }
};
