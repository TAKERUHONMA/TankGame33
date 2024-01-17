#include "PlayScene.h"
#include "Ground.h"
#include "Engine/Text.h"


PlayScene::PlayScene(GameObject* parent)
	:GameObject(parent, "PlayScene"),pText(nullptr)
{
}

void PlayScene::Initialize()
{
	Instantiate<Ground>(this);
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
