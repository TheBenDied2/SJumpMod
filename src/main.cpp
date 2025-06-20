#include <Geode/Geode.hpp>

class SJumpMod : public geode::Mod {
public:
    void onLoad() override {
        auto gameLayer = geode::GameLayer::get();
        gameLayer->setKeyDownHandler(geode::Key::S, [this]() {
            gameLayer->player()->jump();
        });
    }
};

static SJumpMod s_jump_mod;
