#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);
  delay(500);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  // Teste RGB
  tft.fillRect(0, 0, 320, 56, TFT_RED);
  tft.fillRect(0, 56, 320, 56, TFT_GREEN);
  tft.fillRect(0, 112, 320, 56, TFT_BLUE);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(10, 190);
  tft.println("LilyGO T-Display S3");

  tft.setTextSize(3);
  tft.setCursor(10, 220);
  tft.println("PARALLEL OK!");
}

void loop() {
}

