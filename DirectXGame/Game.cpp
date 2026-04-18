#include "Game.h"
using namespace KamataEngine;

void Game::Initialize() 
{


	textureHandle_ = TextureManager::Load("uvChecker.png");

	model_ = Model::Create();
	model2_ = Model2::Create();
	
	worldTransform_.Initialize();
	camera_.Initialize();

	Model2::StaticInitialize();



}

void Game::Update() 
{ 
	
}

void Game::Draw() 
{ 
	 ID3D12GraphicsCommandList* commandList = DirectXCommon::GetInstance()->GetCommandList();



	Model::PreDraw();
	//model_->Draw(worldTransform_, camera_, textureHandle_);
	Model::PostDraw();



	Model2::PreDraw(commandList);
	model2_->Draw(worldTransform_, camera_, textureHandle_);

	Model2::PostDraw();


}

Game::~Game() 
{ 
	delete model_;
	delete model2_;
	
	Model2::StaticFinalize();
}