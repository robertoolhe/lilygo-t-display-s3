// =======================================================
//  Setup206_LilyGo_T_Display_S3.h
//  ST7789 - Parallel 8-bit
//  LilyGO T-Display S3 (versão chinesa)
// =======================================================

#define USER_SETUP_LOADED

// ---------------- Display driver ----------------
#define ST7789_DRIVER
#define INIT_SEQUENCE_3
#define CGRAM_OFFSET

// ---------------- Display resolution -------------
#define TFT_WIDTH   170
#define TFT_HEIGHT  320

// ---------------- Display orientation -------------
#define TFT_RGB_ORDER TFT_RGB
#define TFT_INVERSION_ON

// ---------------- Parallel interface --------------
#define TFT_PARALLEL_8_BIT

// Control pins
#define TFT_CS   6
#define TFT_DC   7
#define TFT_RST  5
#define TFT_WR   8
#define TFT_RD   9

// Data bus pins D0–D7
#define TFT_D0  39
#define TFT_D1  40
#define TFT_D2  41
#define TFT_D3  42
#define TFT_D4  45
#define TFT_D5  46
#define TFT_D6  47
#define TFT_D7  48

// ---------------- Backlight ------------------------
#define TFT_BL 38
#define TFT_BACKLIGHT_ON HIGH

// ---------------- Fonts ----------------------------
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

// ---------------- SPI frequencies (not used, but required) ----
#define SPI_FREQUENCY  27000000

