# generated from rosidl_generator_py/resource/_idl.py.em
# with input from village_interface:srv/Money.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Money_Request(type):
    """Metaclass of message 'Money_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Money_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__money__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__money__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__money__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__money__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__money__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Money_Request(metaclass=Metaclass_Money_Request):
    """Message class 'Money_Request'."""

    __slots__ = [
        '_name',
        '_money',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'money': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.money = kwargs.get('money', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.money != other.money:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def money(self):
        """Message field 'money'."""
        return self._money

    @money.setter
    def money(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'money' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'money' field must be an unsigned integer in [0, 4294967295]"
        self._money = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Money_Response(type):
    """Metaclass of message 'Money_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Money_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__money__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__money__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__money__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__money__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__money__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Money_Response(metaclass=Metaclass_Money_Response):
    """Message class 'Money_Response'."""

    __slots__ = [
        '_success',
        '_money',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'money': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.money = kwargs.get('money', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.money != other.money:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def money(self):
        """Message field 'money'."""
        return self._money

    @money.setter
    def money(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'money' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'money' field must be an unsigned integer in [0, 4294967295]"
        self._money = value


class Metaclass_Money(type):
    """Metaclass of service 'Money'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interface.srv.Money')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__money

            from village_interface.srv import _money
            if _money.Metaclass_Money_Request._TYPE_SUPPORT is None:
                _money.Metaclass_Money_Request.__import_type_support__()
            if _money.Metaclass_Money_Response._TYPE_SUPPORT is None:
                _money.Metaclass_Money_Response.__import_type_support__()


class Money(metaclass=Metaclass_Money):
    from village_interface.srv._money import Money_Request as Request
    from village_interface.srv._money import Money_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
