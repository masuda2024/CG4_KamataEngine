#include "Particle.h"


void Particle::Initialize(KamataEngine::Model* model) 
{ 
	assert(model); 

	model_ = model;

	worldTransform_.Initialize();
}

void Particle::Update() 
{ 
	worldTransform_.TransferMatrix();
}

void Particle::Draw(KamataEngine::Camera& camera)
{
	model_->Draw(worldTransform_, camera);
}
