#include "Game.h"
using namespace KamataEngine;
using namespace MathUtility;
void Game::Initialize() 
{


	
	//model_ = Model::Create();
	

	Model2::StaticInitialize();
	//model2_ = Model2::Create();
	model2_ = Model2::CreateSquare();
	
	model2_2_ = Model2::CreateSquare2();
	
	model2_3_ = Model2::CreateSquare3();
	
	model2_ring_ = Model2::CreateRing(5.0f, 10.0f, 8);
	



	textureHandle_ = TextureManager::Load("uvChecker.png");



	worldTransform_.Initialize();
	camera_.Initialize();


	
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
	

		//model2_->Draw(worldTransform_, camera_, textureHandle_);
		
		//model2_2_->Draw(worldTransform_, camera_, textureHandle_);
	
		//model2_3_->Draw(worldTransform_, camera_, textureHandle_);
	   
		model2_ring_->Draw(worldTransform_, camera_, textureHandle_);
		
	Model2::PostDraw();


}

Game::~Game() 
{ 
	//delete model_;
	delete model2_;
	
	Model2::StaticFinalize();
}