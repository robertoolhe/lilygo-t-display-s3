# 🖥️ LilyGO TT-GO T-Display-S3 (ESP32-S3R8)
## Guia definitivo + Template PlatformIO (TFT_eSPI · ST7789 · Parallel 8-bit)

> ✅ **Funciona de verdade**  
> ❌ Sem “gambiarra”  
> ❌ Sem editar arquivos dentro de `.pio/libdeps`

Este repositório documenta a **solução definitiva** para usar a **LilyGO / TT-GO T-Display-S3 “chinesa”**  
(ESP32-S3R8 + display ST7789 em **modo paralelo 8-bit**) com:

- **VS Code**
- **PlatformIO**
- **TFT_eSPI (Bodmer)**

Depois de muitas tentativas frustradas (SPI, setups errados, tela apagada, driver incorreto),  
a solução correta foi confirmada usando o **Setup206 oficial da biblioteca TFT_eSPI**.

---

## 📌 Importante (leia primeiro)

⚠️ **Esta placa NÃO usa SPI para o display**  
✔️ O display é **ST7789 em modo Parallel 8-bit**

⚠️ **Tutoriais comuns da internet NÃO funcionam** para esta versão “chinesa” da T-Display-S3.

✔️ A única configuração estável e funcional é baseada no:

```
Setup206_LilyGo_T_Display_S3.h
```

---

## 🧩 Hardware testado

- Placa: **LilyGO / TT-GO T-Display-S3**
- MCU: **ESP32-S3R8**
- Display: **ST7789**
- Interface: **Parallel 8-bit**
- Resolução real: **170 × 320**
- Orientação: **horizontal (botões BOOT / USR à esquerda)**

---

## 📂 Estrutura do projeto

```
lilygo-t-display-s3/
├── include/
│   └── User_Setup_T_Display_S3_206.h
├── src/
│   └── main.cpp
├── platformio.ini
├── templates/
│   ├── template-parallel-basic/
│   └── template-lvgl/
├── docs/
│   └── img/
└── README.md
```

---

## 🧠 Conceito importante (TFT_eSPI + PlatformIO)

❌ **Nunca edite arquivos dentro de**:
```
.pio/libdeps/.../TFT_eSPI/
```

✔️ A forma correta é **forçar o uso de um User_Setup externo**, via `platformio.ini`.

---

## 🧩 Arquivo de setup definitivo

### 📄 `include/User_Setup_T_Display_S3_206.h`

Baseado no arquivo oficial:

```
Setup206_LilyGo_T_Display_S3.h
```

### Conteúdo essencial:

```c
#define USER_SETUP_ID 206

#define ST7789_DRIVER
#define INIT_SEQUENCE_3

#define CGRAM_OFFSET
#define TFT_RGB_ORDER TFT_RGB
#define TFT_INVERSION_ON

#define TFT_PARALLEL_8_BIT

#define TFT_WIDTH  170
#define TFT_HEIGHT 320

#define TFT_CS   6
#define TFT_DC   7
#define TFT_RST  5

#define TFT_WR   8
#define TFT_RD   9

#define TFT_D0  39
#define TFT_D1  40
#define TFT_D2  41
#define TFT_D3  42
#define TFT_D4  45
#define TFT_D5  46
#define TFT_D6  47
#define TFT_D7  48

#define TFT_BL  38
#define TFT_BACKLIGHT_ON HIGH

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
```

---

## ⚙️ platformio.ini (CONFIGURAÇÃO CRÍTICA)

```ini
build_flags =
  -DUSER_SETUP_LOADED
  -include include/User_Setup_T_Display_S3_206.h
```

---

## 🚀 Como usar este template

```bash
git clone https://github.com/robertoolhe/lilygo-t-display-s3.git
```

---

## 🙏 Créditos

- Biblioteca **TFT_eSPI** — Bodmer  
- Consolidação e testes: **Roberto La Bella**
