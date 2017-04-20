
namespace JDS
{
	class Camera2f
	{
	public:
		Camera2f();
		~Camera2f();
		void setPosition(Vector2f position);
		float x;
		float y;
		float rotate;
		float scale;
		float xFirst;
		float yFirst;
		void Camera();
	};

}