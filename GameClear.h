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

    //������
    void Initialize() override;

    //�X�V
    void Update() override;

    //�`��
    void Draw() override;

    //�J��
    void Release() override;
};

