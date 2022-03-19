class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setLength(int dlength);
       void setHeight(int dheight);
       void setWidth(int dwidth);
       // write prototypes of getters for length, width and height
       int getLength();
       int getHeight();
       int getWidth();
 
       int calcVolume();
};
