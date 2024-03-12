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

    //‰Šú‰»
    void Initialize() override;

    //XV
    void Update() override;

    //•`‰æ
    void Draw() override;

    //ŠJ•ú
    void Release() override;
};

