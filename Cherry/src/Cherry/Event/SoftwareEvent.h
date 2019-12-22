#pragma once

#include "Event.h"


namespace Cherry {

	class WindowResizeEvent : public Event
	{
	public:
		WindowResizeEvent(unsigned int width, unsigned int height)
			: m_Width(width), m_Height(height) {}

		inline unsigned int GetWidth() const { return m_Width; }
		inline unsigned int GetHeight() const { return m_Height; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
			return ss.str();
		}

		EVENT_CLASS_TYPE(WindowResize)
			EVENT_CLASS_CATEGORY(EventCategorySoftware)
	private:
		unsigned int m_Width, m_Height;
	};

	class WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent() = default;

		EVENT_CLASS_TYPE(WindowClose)
			EVENT_CLASS_CATEGORY(EventCategorySoftware)
	};

	class SoftTickEvent : public Event
	{
	public:
		SoftTickEvent() = default;

		EVENT_CLASS_TYPE(SoftTick)
			EVENT_CLASS_CATEGORY(EventCategorySoftware)
	};

	class SoftUpdateEvent : public Event
	{
	public:
		SoftUpdateEvent() = default;

		EVENT_CLASS_TYPE(SoftUpdate)
			EVENT_CLASS_CATEGORY(EventCategorySoftware)
	};

	class SoftRenderEvent : public Event
	{
	public:
		SoftRenderEvent() = default;

		EVENT_CLASS_TYPE(SoftRender)
			EVENT_CLASS_CATEGORY(EventCategorySoftware)
	};
}