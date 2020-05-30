#ifndef STATIC_H
#define STATIC_H

class Static {
  private:
   int myx;
  public:
    Static() { myx=0; }
    void setx(int newx);
    int  getx();
};

#endif
