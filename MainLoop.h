#pragma once
#include <Novice.h>
#include "Result.h"
#include "IScene.h"
#include "TitleScene.h"

const char kWindowTitle[] = "LE2B_16_ツユキ_イオリ_";

class MainLoop {

private:

	//// キー入力結果を受け取る箱
	char keys[256];
	char preKeys[256];

	IScene* currentScene_;

public:

	MainLoop();

	~MainLoop();

	/// 
	/// キー入力を受け取る
	/// 
	void InPut();

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// 
	/// 更新処理
	/// 
	void Update();

	///
	/// 描画処理
	///
	void Draw();

	///
	/// 全体のループ
	/// 
	void WholeLoop();
};