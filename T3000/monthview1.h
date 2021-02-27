#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMonthview1 wrapper class

class CMonthview1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMonthview1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x232E456A, 0x87C3, 0x11D1, { 0x8B, 0xE3, 0x0, 0x0, 0xF8, 0x75, 0x4D, 0xA1 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
enum
{
    cc2OLEDropNone = 0,
    cc2OLEDropManual = 1
}OLEDropConstants;
enum
{
    cc2Enter = 0,
    cc2Leave = 1,
    cc2Over = 2
}DragOverConstants;
enum
{
    cc2CFText = 1,
    cc2CFBitmap = 2,
    cc2CFMetafile = 3,
    cc2CFDIB = 8,
    cc2CFPalette = 9,
    cc2CFEMetafile = 14,
    cc2CFFiles = 15,
    cc2CFRTF = -16639
}ClipBoardConstants;
enum
{
    cc2OLEDropEffectNone = 0,
    cc2OLEDropEffectCopy = 1,
    cc2OLEDropEffectMove = 2,
    cc2OLEDropEffectScroll = -2147483648
}OLEDropEffectConstants;
enum
{
    cc2BadFileNameOrNumber = 52,
    cc2FileNotFound = 53,
    cc2InvalidPropertyValue = 380,
    cc2SetNotSupportedAtRuntime = 382,
    cc2SetNotSupported = 383,
    cc2GetNotSupported = 394,
    cc2DataObjectLocked = 672,
    cc2ExpectedAnArgument = 673,
    cc2InvalidProcedureCall = 5,
    cc2InvalidObjectUse = 425,
    cc2WrongClipboardFormat = 461,
    cc2RecursiveOleDrag = 674,
    cc2FormatNotByteArray = 675,
    cc2DataNotSetForFormat = 676,
    cc2InconsistentObject = 35750,
    cc2ErrorDuringSet = 35751,
    cc2ErrorOpeningVideo = 35752,
    cc2ErrorPlayingVideo = 35753,
    cc2VideoNotOpen = 35755,
    cc2ErrorStoppingVideo = 35757,
    cc2ErrorClosingVideo = 35758,
    cc2CantStopAutoPlay = 35759,
    cc2NoValidBuddyCtl = 35754,
    cc2AutoBuddyNotSet = 35756,
    cc2BuddyNotASibling = 35760,
    cc2NoUpDownAsBuddy = 35761,
    cc2InvalidRange = 35770,
    cc2InvalidMaxDate = 35771,
    cc2InvalidMinDate = 35772,
    cc2DateOutOfRange = 35773,
    cc2InvalidMaxDateMin = 35774,
    cc2InvalidMinDateMax = 35775,
    cc2InvalidRowColValue = 35776,
    cc2InvalidRowColTotal = 35777,
    cc2MonthViewError = 35778,
    cc2SetDayMultiSelectOn = 35779,
    cc2SetDayOfWeekMultiSelectOn = 35780,
    cc2SetMonthMultiSelectOn = 35781,
    cc2SetWeekMultiSelectOn = 35782,
    cc2SetYearMultiSelectOn = 35783,
    cc2SetMaxSelCountMultiSelectOff = 35784,
    cc2SetSelEndMultiSelectOff = 35785,
    cc2SetSelStartMultiSelectOff = 35786,
    cc2NullValueNotAllowed = 35787,
    cc2DTPickerError = 35788,
    cc2ScrollValueOutOfRange = 35789
}ErrorConstants;
enum
{
    cc2Flat = 0,
    cc23D = 1
}AppearanceConstants;
enum
{
    cc2None = 0,
    cc2FixedSingle = 1
}BorderStyleConstants;
enum
{
    cc2Default = 0,
    cc2Arrow = 1,
    cc2Cross = 2,
    cc2IBeam = 3,
    cc2Icon = 4,
    cc2Size = 5,
    cc2SizeNESW = 6,
    cc2SizeNS = 7,
    cc2SizeNWSE = 8,
    cc2SizeEW = 9,
    cc2UpArrow = 10,
    cc2Hourglass = 11,
    cc2NoDrop = 12,
    cc2ArrowHourglass = 13,
    cc2ArrowQuestion = 14,
    cc2SizeAll = 15,
    cc2Custom = 99
}MousePointerConstants;
enum
{
    cc2OrientationVertical = 0,
    cc2OrientationHorizontal = 1
}OrientationConstants;
enum
{
    cc2BackstyleTransparent = 0,
    cc2BackstyleOpaque = 1
}BackStyleConstants;
enum
{
    cc2AlignmentLeft = 0,
    cc2AlignmentRight = 1
}AlignmentConstants;
enum
{
    mvwSunday = 1,
    mvwMonday = 2,
    mvwTuesday = 3,
    mvwWednesday = 4,
    mvwThursday = 5,
    mvwFriday = 6,
    mvwSaturday = 7
}DayConstants;
enum
{
    mvwJanuary = 1,
    mvwFebruary = 2,
    mvwMarch = 3,
    mvwApril = 4,
    mvwMay = 5,
    mvwJune = 6,
    mvwJuly = 7,
    mvwAugust = 8,
    mvwSeptember = 9,
    mvwOctober = 10,
    mvwNovember = 11,
    mvwDecember = 12
}MonthConstants;
enum
{
    mvwCalendarBack = 0,
    mvwCalendarDate = 1,
    mvwCalendarDateNext = 2,
    mvwCalendarDatePrev = 3,
    mvwCalendarDay = 4,
    mvwCalendarWeekNum = 5,
    mvwNoWhere = 6,
    mvwTitleBack = 7,
    mvwTitleBtnNext = 8,
    mvwTitleBtnPrev = 9,
    mvwTitleMonth = 10,
    mvwTitleYear = 11,
    mvwTodayLink = 12
}MonthViewHitTestAreas;
enum
{
    dtpLongDate = 0,
    dtpShortDate = 1,
    dtpTime = 2,
    dtpCustom = 3
}FormatConstants;
enum
{
    fsb3D = 0,
    fsbFlat = 1,
    fsbTrack3D = 2
}FlatScrollBarAppearanceConstants;
enum
{
    cc2Both = 0,
    cc2LeftUp = 1,
    cc2RightDown = 2
}ArrowsConstants;


// Operations
public:

// IMonthView

// Functions
//

	long get_Appearance()
	{
		long result;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Appearance(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BorderStyle()
	{
		long result;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BorderStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_Day()
	{
		short result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_Day(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DayBold(DATE dateIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, dateIndex);
		return result;
	}
	void put_DayBold(DATE dateIndex, BOOL newValue)
	{
		static BYTE parms[] = VTS_DATE VTS_BOOL ;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, dateIndex, newValue);
	}
	long get_DayOfWeek()
	{
		long result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DayOfWeek(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Font()
	{
		LPDISPATCH result;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_Font(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void putref_Font(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_ForeColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_ForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_hWnd()
	{
		long result;
		InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_hWnd(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_MaxDate()
	{
		DATE result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_MaxDate(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_MaxSelCount()
	{
		short result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_MaxSelCount(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_MinDate()
	{
		DATE result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_MinDate(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Month()
	{
		long result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Month(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_MonthBackColor()
	{
		unsigned long result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_MonthBackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_MonthColumns()
	{
		short result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_MonthColumns(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_MonthRows()
	{
		short result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_MonthRows(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_MouseIcon()
	{
		LPDISPATCH result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void putref_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xb, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MousePointer()
	{
		long result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MousePointer(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_MultiSelect()
	{
		BOOL result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_MultiSelect(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OLEDropMode()
	{
		long result;
		InvokeHelper(0x60f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OLEDropMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x60f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_ScrollRate()
	{
		short result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_ScrollRate(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_SelEnd()
	{
		DATE result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_SelEnd(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_SelStart()
	{
		DATE result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_SelStart(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowToday()
	{
		BOOL result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowToday(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowWeekNumbers()
	{
		BOOL result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowWeekNumbers(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StartOfWeek()
	{
		long result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StartOfWeek(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_TitleBackColor()
	{
		unsigned long result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_TitleBackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_TitleForeColor()
	{
		unsigned long result;
		InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_TitleForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_TrailingForeColor()
	{
		unsigned long result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_TrailingForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_Value()
	{
		DATE result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_Value(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get__Value()
	{
		DATE result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put__Value(DATE newValue)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	DATE get_VisibleDays(short sIndex)
	{
		DATE result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, parms, sIndex);
		return result;
	}
	void put_VisibleDays(short sIndex, DATE newValue)
	{
		static BYTE parms[] = VTS_I2 VTS_DATE ;
		InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, sIndex, newValue);
	}
	short get_Week()
	{
		short result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_Week(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_Year()
	{
		short result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_Year(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ComputeControlSize(short Rows, short Columns, float * Width, float * Height)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Rows, Columns, Width, Height);
	}
	long HitTest(long x, long y, DATE * Date)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PDATE ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y, Date);
		return result;
	}
	void OLEDrag()
	{
		InvokeHelper(0x610, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Refresh()
	{
		InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

// Properties
//



};
