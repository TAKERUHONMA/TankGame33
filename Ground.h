#pragma once
#include "Engine/GameObject.h"
class Ground : public GameObject
{
	int hModel_;
public:
	//�R���X�g���N�^
	//����:parent �e�I�u�W�F�N�g
	Ground(GameObject* parent);
	~Ground();

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;

	int GetModelHandle() { return(hModel_); }
};

