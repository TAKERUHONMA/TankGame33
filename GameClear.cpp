#include "GameClear.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"
#include "Engine/Text.h"
#include "Engine/Image.h"

GameClear::GameClear(GameObject* parent)
	:GameObject(parent,"GameClear"),hPict_(-1), pText(nullptr)
{
}

void GameClear::Initialize()
{
	hPict_ = Image::Load("GameClear.png");
	assert(hPict_ >= 0);

	pText = new Text;
	pText->Initialize();
}

void GameClear::Update()
{
	if (Input::IsKeyDown(DIK_SPACE))
	{
		SceneManager* pSM = (SceneManager*)FindObject("SceneManager");
		pSM->ChangeScene(SCENE_ID_TITLE);
	}
}

void GameClear::Draw()
{
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
	pText->Draw(550, 600, "PUSH TO SPACE");
}

void GameClear::Release()
{
}
