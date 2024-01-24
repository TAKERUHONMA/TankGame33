#include "PlayScene.h"
#include "Ground.h"
#include "Enemy.h"
#include "Engine/Text.h"
#include "Tank.h"

namespace
{
	const int ENEMY_NUM{ 30 };
}

PlayScene::PlayScene(GameObject* parent)
	:GameObject(parent, "PlayScene"),pText(nullptr)
{
}

void PlayScene::Initialize()
{
	Instantiate<Ground>(this);
	prayer = Instantiate<Tank>(this);
	//敵をインスタンス化
	enemyNum = ENEMY_NUM;
	for (int i = 0; i < enemyNum; i++)
		Instantiate<Enemy>(this);

	pText = new Text;
	pText->Initialize();
	

}

void PlayScene::Update()
{
}

void PlayScene::Draw()
{
	pText->Draw(30, 30, "Yahoo!");
}

void PlayScene::Release()
{
}
