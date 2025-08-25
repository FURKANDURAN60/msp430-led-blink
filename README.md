# MSP430 LED Blink (5 saniye aralıkla)

##  Açıklama
Bu proje, MSP430 mikrodenetleyici kullanılarak bir LED'in her 5 saniyede bir yanıp sönmesini sağlar. Proje, temel GPIO çıkış kontrolünü öğrenmek için idealdir.

##  Kullanılan Donanımlar
- MSP430G2231 mikrodenetleyici
- 1 adet LED (P1.0 pinine bağlı)
- 1 adet 330Ω direnç (LED için seri)

## 🔌 Bağlantı Şeması

| Pin        | Bağlı Olduğu Bileşen |
|------------|----------------------|
| P1.0       | LED (direnç ile birlikte GND’ye) |

## Proje Özellikleri
- GPIO çıkış konfigürasyonu (P1DIR)
- LED yakma ve söndürme (P1OUT)
- Delay fonksiyonu ile zamanlama (yaklaşık 5 saniye)

##  Derleme ve Yükleme Bilgisi
- IDE: Code Composer Studio
- Mikrodenetleyici: MSP430G2231
- Programlayıcı: MSP430 LaunchPad

## İletişim
- Furkan Duran
- b210109048@subu.edu.tr
