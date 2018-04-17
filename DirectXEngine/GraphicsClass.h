#pragma once

//����


const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class D3DClass;
class CameraClass;
class TextureShaderClass;
class BitmapClass;
class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render(float);
	void AddCursorPositionY();
	void SubtractCursorPositionY();
	void MoveCellSelector(int,bool);

private:
	D3DClass * m_Direct3D = nullptr;
	CameraClass* m_Camera = nullptr;
	TextureShaderClass* m_TextureShader = nullptr;

	BitmapClass* m_BackGround = nullptr;
	BitmapClass** m_DestBitmapObjects = nullptr;
	BitmapClass* m_MyMap = nullptr;
	BitmapClass* m_EnemyMap = nullptr;
	BitmapClass* m_Intro = nullptr;
	BitmapClass* m_MainScene = nullptr;
	BitmapClass* m_IntroductionScene = nullptr;
	BitmapClass* m_HowToScene = nullptr;
	BitmapClass* m_Cursor = nullptr;
	BitmapClass* m_CellSelector = nullptr;

	int m_BitmapArrayLength = 300;
	BitmapClass* m_MyCellArray[10][10];
	BitmapClass* m_EnemyCellArray[10][10];

	BitmapClass** m_ShipArray = nullptr;

	BitmapClass* m_Ship2_H_num1 = nullptr;
	BitmapClass* m_Ship2_H_num2 = nullptr;
	BitmapClass* m_Ship3_H_num1 = nullptr;
	BitmapClass* m_Ship3_H_num2 = nullptr;
	BitmapClass* m_Ship4_H_num1 = nullptr;
	
	BitmapClass* m_Ship2_V_num1 = nullptr;
	BitmapClass* m_Ship2_V_num2 = nullptr;
	BitmapClass* m_Ship3_V_num1 = nullptr;
	BitmapClass* m_Ship3_V_num2 = nullptr;
	BitmapClass* m_Ship4_V_num1 = nullptr;
	BitmapClass* WinScene = nullptr;
	BitmapClass* LoseScene = nullptr;

	
	int m_CursorPositionY = 560;
	int m_CursorDest = 0;

	//�� �Լ��� ��ġ�� �� ����մϴ�. �� ��ġ�� �Լ��� �����ϴ��� �ƴ����� ���θ� ǥ���մϴ�.
	bool m_MyMapCellIsEnable[10][10];
	// m_MyMapCellIsEnable �� ��������� �������̰� � �谡 ��� ��ġ�ϴ��� �� �� �ֽ��ϴ�
	char m_MyShipLocation[10][10];
	
	//�� AI�� �ڽ��� �踦 ��ġ�� �� ����մϴ�.
	bool m_EnemyMapCellIsEnable[10][10];
	// m_EnemyMapCleeIsEnable�� ��������� �������̰� � �谡 ��� ��ġ�ϴ��� �� �� �ֽ��ϴ�.
	char m_EnemyShipLocation[10][10];

	//���� ���ݴ��� ���� ��ġ�� ǥ���մϴ�
	bool m_MyMapCellIsAttacked[10][10];

	//���� ���ݴ��� ���� ��ġ�� ǥ���մϴ�.
	bool m_EnemyMapCellIsAttacked[10][10];

	int m_CellSelectorXIndex = 0;
	int m_CellSelectorYIndex = 0;

	//�Լ��� ��ġ�� �� �ε����� ���
	int l = 0;

	bool IsWin = true;
	int temp = 0;
	bool winOrLose = false;
};

