#ifndef Line_h
#define Line_h
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor
 
   private:
      double length;
};
int add(int x, int y);
#endif
