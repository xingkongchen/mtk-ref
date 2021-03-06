
#ifndef __BQ2415X_HEADER__
#define __BQ2415X_HEADER__

/* Register 00h */
#define BQ2415X_REG_00      		0x00
#define	BQ2415X_TMR_RST_MASK		0x80
#define BQ2415X_OTG_MASK			0x80
#define BQ2415X_TMR_RST_SHIFT		7
#define BQ2415X_TMR_RST				1
#define BQ2415X_EN_STAT_MASK		0x40
#define BQ2415X_EN_STAT_SHIFT		6
#define BQ2415X_STAT_MASK			0x30
#define BQ2415X_STAT_SHIFT			4
#define BQ2415X_STAT_READY			0
#define BQ2415X_STAT_CHARGING		1
#define BQ2415X_STAT_CHGDONE		2
#define BQ2415X_STAT_FAULT			3

#define BQ2415X_BOOST_MASK			0x08
#define BQ2415X_BOOST_SHIFT			3
#define BQ2415X_FAULT_MASK			07
#define BQ2415X_FAULT_SHIFT			0

/* Register 01h */
#define BQ2415X_REG_01				0x01
#define BQ2415X_IINLIM_MASK			0xC0
#define BQ2415X_IINLIM_SHIFT		6
#define BQ2415X_IINLIM_100MA		0
#define BQ2415X_IINLIM_500MA		1
#define BQ2415X_IINLIM_800MA		2
#define BQ2415X_IINLIM_NOLIM		3

#define BQ2415X_WEAK_BATT_VOLT_MASK	0x30
#define BQ2415X_WEAK_BATT_VOLT_SHIFT 4
#define BQ2415X_WEAK_BATT_VOLT_BASE  3400
#define BQ2415X_WEAK_BATT_VOLT_LSB	 100
#define BQ2415X_TERM_ENABLE_MASK	0x08
#define BQ2415X_TERM_ENABLE_SHIFT	 3
#define BQ2415X_TERM_ENABLE			1
#define BQ2415X_TERM_DISABLE		0
#define BQ2415X_CHARGE_ENABLE_MASK	0x04
#define BQ2415X_CHARGE_ENABLE_SHIFT	 2
#define BQ2415X_CHARGE_ENABLE		0
#define BQ2415X_CHARGE_DISABLE		1
#define BQ2415X_HZ_MODE_MASK		0x02
#define BQ2415X_HZ_MODE_SHIFT		1
#define BQ2415X_HZ_MODE_ENABLE		1
#define BQ2415X_HZ_MODE_DISABLE		0
#define BQ2415X_OPA_MODE_MASK		0x01
#define BQ2415X_OPA_MODE_SHIFT		0
#define BQ2415X_BOOST_MODE			1
#define BQ2415X_CHARGER_MODE		0

/* Register 02h */
#define BQ2415X_REG_02				0x02
#define BQ2415X_VREG_MASK			0xFC
#define BQ2415X_VREG_SHIFT			2
#define	BQ2415X_VREG_BASE			3500
#define	BQ2415X_VREG_LSB			20

#define BQ2415X_OTG_PL_MASK			0x02
#define BQ2415X_OTG_PL_SHIFT		1
#define BQ2415X_OTG_PL_HIGH			1
#define BQ2415X_OTG_PL_LOW			0
#define BQ2415X_OTG_EN_MASK			0x01
#define BQ2415X_OTG_EN_SHIFT		0
#define BQ2415X_OTG_ENABLE			1
#define BQ2415X_OTG_DISABLE			0

/* Register 03h */
#define BQ2415X_REG_03				0x03
#define BQ2415X_VENDOR_MASK			0xE0
#define BQ2415X_VENDOR_SHIFT		5
#define BQ2415X_PN_MASK				0x18
#define BQ2415X_PN_SHIFT			3
#define BQ2415X_REVISION_MASK		0x07
#define BQ2415X_REVISION_SHIFT		0

/* Register 04h */
#define BQ2415X_REG_04				0x04
#define BQ2415X_RESET_MASK			0x80
#define BQ2415X_RESET_SHIFT			7
#define BQ2415X_RESET				1
#define BQ2415X_ICHG_MASK          	0x70
#define BQ2415X_ICHG_SHIFT         	4
#define BQ2415X_ICHG_BASE          	374 /*unit 0.1mV*/
#define BQ2415X_ICHG_LSB           	68  /*unit 0.1mV*/
#define	BQ2415X_ITERM_MASK			0x07
#define	BQ2415X_ITERM_SHIFT			0
#define	BQ2415X_ITERM_BASE			34 /*unit 0.1mV*/
#define	BQ2415X_ITERM_LSB			34 /*unit 0.1mV*/

/* Register 05h */
#define BQ2415X_REG_05		    	0x05
#define BQ2415X_LOW_CHG_MASK		0x20
#define BQ2415X_LOW_CHG_SHIFT		5
#define BQ2415X_LOW_CHG				1

#define BQ2415X_DPM_STATUS_MASK		0x10
#define BQ2415X_CD_STATUS_MASK		0x08
#define BQ2415X_VSREG_MASK			0x07
#define BQ2415X_VSREG_SHIFT			0
#define BQ2415X_VSREG_BASE			4200
#define BQ2415X_VSREG_LSB			80

/* Register 06h */
#define BQ2415X_REG_06		    	0x06
#define BQ2415X_MAX_ICHG_MASK		0xF0
#define BQ2415X_MAX_ICHG_SHIFT		4
#define BQ2415X_MAX_ICHG_BASE		374
#define BQ2415X_MAX_ICHG_LSB		68
#define BQ2415X_MAX_VREG_MASK		0x0F
#define BQ2415X_MAX_VREG_SHIFT		0
#define BQ2415X_MAX_VREG_BASE		4200
#define BQ2415X_MAX_VREG_LSB		20

#endif
