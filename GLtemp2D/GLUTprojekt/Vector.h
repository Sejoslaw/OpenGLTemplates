
namespace JDS
{
	class Vector2i
	{
	public:
		Vector2i();
		Vector2i(GLint X, GLint Y);
		Vector2i(Vector2i& V);
		~Vector2i();

		GLint x;
		GLint y;
	};

	class Vector2f
	{
	public:
		Vector2f();
		Vector2f(GLfloat X, GLfloat Y);
		Vector2f(Vector2f& V);
		~Vector2f();

		GLfloat x;
		GLfloat y;
	};

	class Vector4i
	{
	public:
		Vector4i();
		Vector4i(GLint X1, GLint Y1, GLint X2, GLint Y2);
		Vector4i(Vector4i& V);
		Vector4i(Vector2i& V1, Vector2i& V2);
		~Vector4i();

		GLint x1;
		GLint y1;

		GLint x2;
		GLint y2;
	};

	class Vector6i
	{
	public:
		Vector6i();
		Vector6i(GLint X1, GLint Y1, GLint X2, GLint Y2, GLint X3, GLint Y3);
		Vector6i(Vector6i& V);
		Vector6i(Vector2i& V1, Vector2i& V2, Vector2i& V3);
		~Vector6i();

		GLint x1;
		GLint y1;

		GLint x2;
		GLint y2;

		GLint x3;
		GLint y3;
	};
}