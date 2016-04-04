#!/sbin/sh
#
# Panel Detection Script - Authored by dr87 & maintained by Rashed97
#
# Detect panel and swap as necessary 
# lcd_maker_id is determined by get_panel_maker_id on the hardware and is always accurate
# This searches directly in the boot.img and has no other requirements
# Do not shorten the search or you may change the actual kernel source
#
#	LCD_RENESAS_LGD = 0,
#	LCD_RENESAS_JDI = 1
#

lcdmaker=$(grep -c "lcd_maker_id=1" /proc/cmdline)
echo "lcd_maker_id doesn't exist. Something went wrong."
