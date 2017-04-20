

namespace JDS
{
	class RenderWindow
	{
	private:
		static void OnInit(void);
		static void Transform(void);
		static void Display(void);
		static void Render(void);
		static void Reshape(int w, int h);
		static void Tick(void);
		static void Keyboard(unsigned char key, int x, int y);
		static void SpecKeyboard(int key, int x, int y);
		static void Mouse(int button, int state, int x, int y);
		static void MoveMousePut(int x, int y);
		static void MoveMouse(int x, int y);
		static void MouseEntry(int state);
		static void Events();
		
	public:
		
		RenderWindow(Vector2i size, std::string nameWindow, Color color);
		~RenderWindow();
	};
}
