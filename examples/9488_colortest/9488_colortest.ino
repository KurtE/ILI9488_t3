//=============================================================================
//=============================================================================

#include <ILI9488_t3.h>
#include <ILI9488_t3_font_Arial.h>
#define TFT_RST 23
#define TFT_DC 9
#define TFT_CS 10
ILI9488_t3 tft = ILI9488_t3(TFT_CS, TFT_DC, TFT_RST);
//=============================================================================
// Setup
//=============================================================================
void setup()
{
  tft.begin();
  tft.setRotation(3); // 180
  delay(100);

  tft.fillScreen(ILI9488_BLACK);
  delay(250);
  tft.fillScreen(ILI9488_RED);
  delay(250);
  tft.fillScreen(ILI9488_BLUE);
  delay(250);
  tft.fillScreen(ILI9488_GREEN);
  delay(250);
  tft.fillScreen(ILI9488_BLACK);
  

  drawColor(0, 0, "Red", ILI9488_RED);
  drawColor(0, 80, "Green", ILI9488_GREEN);
  drawColor(0, 160, "Blue", ILI9488_BLUE);
  drawColor(0, 240, "White", ILI9488_WHITE);

  drawColor(240, 0, "Yellow", ILI9488_YELLOW);
  drawColor(240, 80, "Orange", ILI9488_ORANGE);
  drawColor(240, 160, "Cyan", ILI9488_CYAN);
  drawColor(240, 240, "Pink", ILI9488_PINK);
}

void drawColor(uint16_t x, uint16_t y, const char *psz, uint16_t color)
{
  //tft.setFontAdafruit();
  tft.setFont(Arial_10);
  tft.setTextColor(color);
  tft.setTextSize(2);
  tft.setCursor(x,y);
  tft.print(psz);
  tft.drawRect(x+100, y, 50, 50, color);
  tft.fillRect(x+110, y+10, 30, 30, color);
  tft.drawLine(x+100, y+70,x+220, y+70, color);
  tft.drawLine(x+220, y, x+220, y+70, color);
  tft.drawLine(x+100, y+70, x+220, y, color); 
  tft.drawCircle(x+50, y+50, 30, color);
  tft.fillCircle(x+50, y+50, 20, color);  
  tft.setFont(Arial_12);
  tft.setCursor(x+160, y+50);
  tft.print(psz);
}


//=============================================================================
// Loop
//=============================================================================
void loop()
{
}
