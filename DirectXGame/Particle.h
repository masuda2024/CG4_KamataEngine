#pragma once
#include "KamataEngine.h"

using namespace KamataEngine;


class Particle
{
public:
	void Initialize(KamataEngine::Model* model);
	void Update();
	void Draw(KamataEngine::Camera& camera);

private:



	WorldTransform worldTransform_;
	KamataEngine::Model* model_ = nullptr;



};
