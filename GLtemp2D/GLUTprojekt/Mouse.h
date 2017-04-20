
namespace JDS
{
	class Mouse
	{
	public:
		enum Button
		{
			ButtonLeft,
			ButtonMiddle,
			ButtonRight,
			ButtonUnknow = -1
		};

		enum Wheel
		{
			WheelDown = 4,
			WheelUp = 3,
			WheelUnknow = -1
		};

		static bool isButtonDown(Button button);
		static bool isButtonUp(Button button);

		static bool isWheel(Wheel wheel);

		static bool isEnterWindow();

		static bool isEnter(int x1, int y1, int x2, int y2);
		static bool isEnter(Vector2i posX1Y1, Vector2i posX2Y2);
		static bool isEnter(Vector4i position);

		Vector2i Position;
	};


	namespace Z
	{
		extern int Button;
		extern bool State;
		extern Vector2i Position;
		extern bool Enter;
		extern bool End;
		
	}
}