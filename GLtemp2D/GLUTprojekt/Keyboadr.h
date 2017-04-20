
namespace JDS
{
	class Keyboard
	{
	public:

		enum Key
		{
			A_Big = 65,
			A_Small = 97,

			B_Big = 66,
			B_Small = 98,

			C_Big = 67,
			C_Small = 99,

			D_Big = 68,
			D_Small = 100,

			E_Big = 69,
			E_Small = 101,

			F_Big = 70,
			F_Small = 102,

			G_Big = 71,
			G_Small = 103,

			H_Big = 72,
			H_Small = 104,

			I_Big = 73,
			I_Small = 105,

			J_Big = 74,
			J_Small = 106,

			K_Big = 75,
			K_Small = 107,

			L_Big = 76,
			L_Small = 108,

			M_Big = 77,
			M_Small = 109,

			N_Big = 78,
			N_Small = 110,

			O_Big = 79,
			O_Small = 111,

			P_Big = 80,
			P_Small = 112,

			Q_Big = 81,
			Q_Small = 113,

			R_Big = 82,
			R_Small = 114,

			S_Big = 83,
			S_Small = 115,

			T_Big = 84,
			T_Small = 116,

			U_Big = 85,
			U_Small = 117,

			V_Big = 86,
			V_Small = 118,

			W_Big = 87,
			W_Small = 119,

			X_Big = 88,
			X_Small = 120,

			Y_Big = 89,
			Y_Small = 121,

			Z_Big = 90,
			Z_Small = 122,

			Num0 = 0,

			Num1 = 1,

			Num2 = 2,

			Num3 = 3,

			Num4 = 4,

			Num5 = 5,

			Num6 = 6,

			Num7 = 7,

			Num8 = 8,

			Num9 = 9,

			F1 = -1,

			F2 = -2,

			F3 = -3,

			F4 = -4,

			F5 = -5,

			F6 = -6,

			F7 = -7,

			F8 = -8,

			F9 = -9,

			F10 = -10,

			F11 = -11,

			F12 = -12,

			//Key ~
			Tilde = 9999,

			//Key Tab
			Tab = 9,

			//Key CapsLock
			CapsLock = 999,

			//Key Left Shift
			LShift = -112,

			//Key Left Control
			LCtrl = -114,

			//Key Left Alt
			LAlt = -116,

			//Key Space
			Space = 32,

			//Key Right Shift
			RShift = -113,

			//Key Right Contro
			RCtrl = -115,

			//Key Right Alt
			RAlt = -117,

			//Key Enter
			Enter = 13,

			//Key BackSpace
			BackSpace = 0,

			//Key +
			Plus = 43,

			//Key -
			Minus = 45,

			//Key /
			Divide = 47,

			//Key *
			Multiply = 42,

			//Key Insert
			Insert = -108,

			//Key Home
			Home = -106,

			//Key PageUp
			PageUp = -104,

			//Key Delete
			Delete = 127,

			//Key End
			End = -107,

			//Key DownPage
			DownPage = -105,

			//Key Up
			Up = -101,

			//Key Down
			Down = -103,

			//Key Left
			Left = -100,

			//Key Right
			Right = -102,

			//Key ,
			Comma = 44,

			//Key .
			Dot = 46,

			//Key \

			BackSlash = 92,

			//Key /
			Slash = 47,

			//Key ESC
			Escape = 27,

			//Key -
			Dash = 45,

			//Key =
			Equal = 61
		};

		static bool isKeyPressed(Key key);
		static bool isKeyPressed(int key);
		static bool isKeyPressed(char key);
	};


	namespace Keys
	{
		extern int key;
	}
}