#pragma once
#include "Engine/GameObject.h"
#include <vector>
#include <string>

using std::string;

class HUD : public GameObject
{
	string ConstructEnemyNumberString();
public:
	//�R���X�g���N�^
	//�����Fparent �e�I�u�W�F�� (SceneManager)
	HUD(GameObject* parent);
	int hHUD_; //�c��Z�Z�@�̉摜
	int hNumbers_; //�����̉摜

	Transform tHud_;

	std::vector<Transform> tNumbers_;

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;

};
