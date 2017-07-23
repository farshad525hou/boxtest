#ifndef box_h
#define box_h
class Box{
	  public:
	void setwidth(int x);
	void setLength(int y);
	int getLength();
	Box();
	Box(int x, int y);
	private:
	int Width;
	int Length;
	

};
#endif
