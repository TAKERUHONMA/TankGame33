#pragma once
#include "Engine/GameObject.h"

class PlayScene;

class Bullet : public GameObject
{
	int hModel_;
	float bulletSpeed_;
	XMFLOAT3 moveDir_;
	PlayScene* playScene_;
public:
	//�R���X�g���N�^
	//����:parent �e�I�u�W�F�N�g(SceneMnager)
	Bullet(GameObject* parent);
	//�f�X�g���N�^ (Release�����邩���ʂ��������������C++�I�ȓz)
	~Bullet();
	 //������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;


	void SetMoveDir(XMFLOAT3 _move) { moveDir_ = _move; }
	void SetSpeed(float _speed) { bulletSpeed_ = _speed; }
	void OnCollision(GameObject* pTarget) override;

};

