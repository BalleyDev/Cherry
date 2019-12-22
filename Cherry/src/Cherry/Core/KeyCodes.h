#pragma once
#include "../chpch.h"

namespace Cherry
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define CH_KEY_SPACE           ::Cherry::Key::Space
#define CH_KEY_APOSTROPHE      ::Cherry::Key::Apostrophe    /* ' */
#define CH_KEY_COMMA           ::Cherry::Key::Comma         /* , */
#define CH_KEY_MINUS           ::Cherry::Key::Minus         /* - */
#define CH_KEY_PERIOD          ::Cherry::Key::Period        /* . */
#define CH_KEY_SLASH           ::Cherry::Key::Slash         /* / */
#define CH_KEY_0               ::Cherry::Key::D0
#define CH_KEY_1               ::Cherry::Key::D1
#define CH_KEY_2               ::Cherry::Key::D2
#define CH_KEY_3               ::Cherry::Key::D3
#define CH_KEY_4               ::Cherry::Key::D4
#define CH_KEY_5               ::Cherry::Key::D5
#define CH_KEY_6               ::Cherry::Key::D6
#define CH_KEY_7               ::Cherry::Key::D7
#define CH_KEY_8               ::Cherry::Key::D8
#define CH_KEY_9               ::Cherry::Key::D9
#define CH_KEY_SEMICOLON       ::Cherry::Key::Semicolon     /* ; */
#define CH_KEY_EQUAL           ::Cherry::Key::Equal         /* = */
#define CH_KEY_A               ::Cherry::Key::A
#define CH_KEY_B               ::Cherry::Key::B
#define CH_KEY_C               ::Cherry::Key::C
#define CH_KEY_D               ::Cherry::Key::D
#define CH_KEY_E               ::Cherry::Key::E
#define CH_KEY_F               ::Cherry::Key::F
#define CH_KEY_G               ::Cherry::Key::G
#define CH_KEY_H               ::Cherry::Key::H
#define CH_KEY_I               ::Cherry::Key::I
#define CH_KEY_J               ::Cherry::Key::J
#define CH_KEY_K               ::Cherry::Key::K
#define CH_KEY_L               ::Cherry::Key::L
#define CH_KEY_M               ::Cherry::Key::M
#define CH_KEY_N               ::Cherry::Key::N
#define CH_KEY_O               ::Cherry::Key::O
#define CH_KEY_P               ::Cherry::Key::P
#define CH_KEY_Q               ::Cherry::Key::Q
#define CH_KEY_R               ::Cherry::Key::R
#define CH_KEY_S               ::Cherry::Key::S
#define CH_KEY_T               ::Cherry::Key::T
#define CH_KEY_U               ::Cherry::Key::U
#define CH_KEY_V               ::Cherry::Key::V
#define CH_KEY_W               ::Cherry::Key::W
#define CH_KEY_X               ::Cherry::Key::X
#define CH_KEY_Y               ::Cherry::Key::Y
#define CH_KEY_Z               ::Cherry::Key::Z
#define CH_KEY_LEFT_BRACKET    ::Cherry::Key::LeftBracket   /* [ */
#define CH_KEY_BACKSLASH       ::Cherry::Key::Backslash     /* \ */
#define CH_KEY_RIGHT_BRACKET   ::Cherry::Key::RightBracket  /* ] */
#define CH_KEY_GRAVE_ACCENT    ::Cherry::Key::GraveAccent   /* ` */
#define CH_KEY_WORLD_1         ::Cherry::Key::World1        /* non-US #1 */
#define CH_KEY_WORLD_2         ::Cherry::Key::World2        /* non-US #2 */

/* Function keys */
#define CH_KEY_ESCAPE          ::Cherry::Key::Escape
#define CH_KEY_ENTER           ::Cherry::Key::Enter
#define CH_KEY_TAB             ::Cherry::Key::Tab
#define CH_KEY_BACKSPACE       ::Cherry::Key::Backspace
#define CH_KEY_INSERT          ::Cherry::Key::Insert
#define CH_KEY_DELETE          ::Cherry::Key::Delete
#define CH_KEY_RIGHT           ::Cherry::Key::Right
#define CH_KEY_LEFT            ::Cherry::Key::Left
#define CH_KEY_DOWN            ::Cherry::Key::Down
#define CH_KEY_UP              ::Cherry::Key::Up
#define CH_KEY_PAGE_UP         ::Cherry::Key::PageUp
#define CH_KEY_PAGE_DOWN       ::Cherry::Key::PageDown
#define CH_KEY_HOME            ::Cherry::Key::Home
#define CH_KEY_END             ::Cherry::Key::End
#define CH_KEY_CAPS_LOCK       ::Cherry::Key::CapsLock
#define CH_KEY_SCROLL_LOCK     ::Cherry::Key::ScrollLock
#define CH_KEY_NUM_LOCK        ::Cherry::Key::NumLock
#define CH_KEY_PRINT_SCREEN    ::Cherry::Key::PrintScreen
#define CH_KEY_PAUSE           ::Cherry::Key::Pause
#define CH_KEY_F1              ::Cherry::Key::F1
#define CH_KEY_F2              ::Cherry::Key::F2
#define CH_KEY_F3              ::Cherry::Key::F3
#define CH_KEY_F4              ::Cherry::Key::F4
#define CH_KEY_F5              ::Cherry::Key::F5
#define CH_KEY_F6              ::Cherry::Key::F6
#define CH_KEY_F7              ::Cherry::Key::F7
#define CH_KEY_F8              ::Cherry::Key::F8
#define CH_KEY_F9              ::Cherry::Key::F9
#define CH_KEY_F10             ::Cherry::Key::F10
#define CH_KEY_F11             ::Cherry::Key::F11
#define CH_KEY_F12             ::Cherry::Key::F12
#define CH_KEY_F13             ::Cherry::Key::F13
#define CH_KEY_F14             ::Cherry::Key::F14
#define CH_KEY_F15             ::Cherry::Key::F15
#define CH_KEY_F16             ::Cherry::Key::F16
#define CH_KEY_F17             ::Cherry::Key::F17
#define CH_KEY_F18             ::Cherry::Key::F18
#define CH_KEY_F19             ::Cherry::Key::F19
#define CH_KEY_F20             ::Cherry::Key::F20
#define CH_KEY_F21             ::Cherry::Key::F21
#define CH_KEY_F22             ::Cherry::Key::F22
#define CH_KEY_F23             ::Cherry::Key::F23
#define CH_KEY_F24             ::Cherry::Key::F24
#define CH_KEY_F25             ::Cherry::Key::F25

/* Keypad */
#define CH_KEY_KP_0            ::Cherry::Key::KP0
#define CH_KEY_KP_1            ::Cherry::Key::KP1
#define CH_KEY_KP_2            ::Cherry::Key::KP2
#define CH_KEY_KP_3            ::Cherry::Key::KP3
#define CH_KEY_KP_4            ::Cherry::Key::KP4
#define CH_KEY_KP_5            ::Cherry::Key::KP5
#define CH_KEY_KP_6            ::Cherry::Key::KP6
#define CH_KEY_KP_7            ::Cherry::Key::KP7
#define CH_KEY_KP_8            ::Cherry::Key::KP8
#define CH_KEY_KP_9            ::Cherry::Key::KP9
#define CH_KEY_KP_DECIMAL      ::Cherry::Key::KPDecimal
#define CH_KEY_KP_DIVIDE       ::Cherry::Key::KPDivide
#define CH_KEY_KP_MULTIPLY     ::Cherry::Key::KPMultiply
#define CH_KEY_KP_SUBTRACT     ::Cherry::Key::KPSubtract
#define CH_KEY_KP_ADD          ::Cherry::Key::KPAdd
#define CH_KEY_KP_ENTER        ::Cherry::Key::KPEnter
#define CH_KEY_KP_EQUAL        ::Cherry::Key::KPEqual

#define CH_KEY_LEFT_SHIFT      ::Cherry::Key::LeftShift
#define CH_KEY_LEFT_CONTROL    ::Cherry::Key::LeftControl
#define CH_KEY_LEFT_ALT        ::Cherry::Key::LeftAlt
#define CH_KEY_LEFT_SUPER      ::Cherry::Key::LeftSuper
#define CH_KEY_RIGHT_SHIFT     ::Cherry::Key::RightShift
#define CH_KEY_RIGHT_CONTROL   ::Cherry::Key::RightControl
#define CH_KEY_RIGHT_ALT       ::Cherry::Key::RightAlt
#define CH_KEY_RIGHT_SUPER     ::Cherry::Key::RightSuper
#define CH_KEY_MENU            ::Cherry::Key::Menu