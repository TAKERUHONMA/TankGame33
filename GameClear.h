#pragma once
#include "Engine/GameObject.h"

class Text;
class GameClear
    :public GameObject
{
    int hPict_;
    Text* pText;
public:
    GameClear(GameObject* parent);

    //初期化
    void Initialize() override;

    //更新
    void Update() override;

    //描画
    void Draw() override;

    //開放
    void Release() override;
};

