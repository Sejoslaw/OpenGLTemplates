
namespace JDS
{
	class Color
	{
	private:
		std::vector<GLint> kolor;

	public:
		Color();
		void Draw();
		Color(GLint r, GLint g, GLint b, GLint f = 255);
		std::vector<GLint> getColor();
		void setColor(GLint r, GLint g, GLint b, GLint f);
		void setColor(std::vector<GLint> color);

		~Color();
		GLint r;
		GLint g;
		GLint b;
		GLint a;
	};
}