#include "JSBSimDcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "JSBSimSplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__JSBSim_position__copyIn(
    c_base base,
    struct JSBSim::position *from,
    struct _JSBSim_position *to);

extern void
__JSBSim_position__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::position TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::positionTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::positionDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::positionTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::positionDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::positionTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::positionDataReaderView_impl (handle);
}

// DDS JSBSim::position TypeSupport Object Body

 JSBSim::positionTypeSupport::positionTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_position__name(),
        __JSBSim_position__keys(),
        JSBSim::positionTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_position__copyIn,
        (gapi_copyOut) __JSBSim_position__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::positionSeq, JSBSim::position>,
        new  JSBSim::positionTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::positionTypeSupport::~positionTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::positionTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::positionTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::position DataWriter_impl Object Body

 JSBSim::positionDataWriter_impl::positionDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::positionDataWriter_impl::~positionDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::positionDataWriter_impl::register_instance(
    const JSBSim::position & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::positionDataWriter_impl::register_instance_w_timestamp(
    const position & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::unregister_instance(
    const JSBSim::position & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::positionDataWriter_impl::unregister_instance_w_timestamp(
    const position & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::write(
    const JSBSim::position & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::write_w_timestamp(
    const position & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::dispose(
    const JSBSim::position & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::positionDataWriter_impl::dispose_w_timestamp(
    const position & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::writedispose(
    const JSBSim::position & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::positionDataWriter_impl::writedispose_w_timestamp(
    const position & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::positionDataWriter_impl::get_key_value(
    position & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::positionDataWriter_impl::lookup_instance(
	const JSBSim::position & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::position DataReader_impl Object Body

 JSBSim::positionDataReader_impl::positionDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::positionDataReader_impl::~positionDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::read(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::take(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::read_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::take_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::read_next_sample(
    JSBSim::position & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::take_next_sample(
    JSBSim::position & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::read_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::take_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::read_next_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::take_next_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::read_next_instance_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::take_next_instance_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::positionDataReader_impl::return_loan(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::positionSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::get_key_value(
    JSBSim::position & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::positionDataReader_impl::lookup_instance(
    const JSBSim::position & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::positionDataReader_impl::check_preconditions(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::position DataReaderView_impl Object Body

 JSBSim::positionDataReaderView_impl::positionDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::positionDataReaderView_impl::~positionDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::read(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::take(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::read_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::take_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReaderView_impl::read_next_sample(
    JSBSim::position & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::positionDataReaderView_impl::take_next_sample(
    JSBSim::position & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::read_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::take_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::read_next_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::take_next_instance(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::positionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::positionDataReaderView_impl::return_loan(
    JSBSim::positionSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::positionSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::positionDataReaderView_impl::get_key_value(
    JSBSim::position & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::positionDataReaderView_impl::lookup_instance(
    const JSBSim::position & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_accelerations__copyIn(
    c_base base,
    struct JSBSim::accelerations *from,
    struct _JSBSim_accelerations *to);

extern void
__JSBSim_accelerations__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::accelerations TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::accelerationsTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::accelerationsDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::accelerationsTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::accelerationsDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::accelerationsTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::accelerationsDataReaderView_impl (handle);
}

// DDS JSBSim::accelerations TypeSupport Object Body

 JSBSim::accelerationsTypeSupport::accelerationsTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_accelerations__name(),
        __JSBSim_accelerations__keys(),
        JSBSim::accelerationsTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_accelerations__copyIn,
        (gapi_copyOut) __JSBSim_accelerations__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::accelerationsSeq, JSBSim::accelerations>,
        new  JSBSim::accelerationsTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::accelerationsTypeSupport::~accelerationsTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::accelerationsTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::accelerationsTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::accelerations DataWriter_impl Object Body

 JSBSim::accelerationsDataWriter_impl::accelerationsDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::accelerationsDataWriter_impl::~accelerationsDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::accelerationsDataWriter_impl::register_instance(
    const JSBSim::accelerations & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::accelerationsDataWriter_impl::register_instance_w_timestamp(
    const accelerations & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::unregister_instance(
    const JSBSim::accelerations & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::accelerationsDataWriter_impl::unregister_instance_w_timestamp(
    const accelerations & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::write(
    const JSBSim::accelerations & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::write_w_timestamp(
    const accelerations & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::dispose(
    const JSBSim::accelerations & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::accelerationsDataWriter_impl::dispose_w_timestamp(
    const accelerations & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::writedispose(
    const JSBSim::accelerations & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataWriter_impl::writedispose_w_timestamp(
    const accelerations & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::accelerationsDataWriter_impl::get_key_value(
    accelerations & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::accelerationsDataWriter_impl::lookup_instance(
	const JSBSim::accelerations & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::accelerations DataReader_impl Object Body

 JSBSim::accelerationsDataReader_impl::accelerationsDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::accelerationsDataReader_impl::~accelerationsDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::read(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::take(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::read_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::take_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::read_next_sample(
    JSBSim::accelerations & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::take_next_sample(
    JSBSim::accelerations & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::read_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::take_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::read_next_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::take_next_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::read_next_instance_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::take_next_instance_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReader_impl::return_loan(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::accelerationsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::get_key_value(
    JSBSim::accelerations & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::accelerationsDataReader_impl::lookup_instance(
    const JSBSim::accelerations & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::accelerationsDataReader_impl::check_preconditions(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::accelerations DataReaderView_impl Object Body

 JSBSim::accelerationsDataReaderView_impl::accelerationsDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::accelerationsDataReaderView_impl::~accelerationsDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::read(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::take(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::read_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::take_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReaderView_impl::read_next_sample(
    JSBSim::accelerations & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReaderView_impl::take_next_sample(
    JSBSim::accelerations & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::read_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::take_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::read_next_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::take_next_instance(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::accelerationsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::accelerationsDataReaderView_impl::return_loan(
    JSBSim::accelerationsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::accelerationsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::accelerationsDataReaderView_impl::get_key_value(
    JSBSim::accelerations & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::accelerationsDataReaderView_impl::lookup_instance(
    const JSBSim::accelerations & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_atitude__copyIn(
    c_base base,
    struct JSBSim::atitude *from,
    struct _JSBSim_atitude *to);

extern void
__JSBSim_atitude__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::atitude TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::atitudeTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::atitudeDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::atitudeTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::atitudeDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::atitudeTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::atitudeDataReaderView_impl (handle);
}

// DDS JSBSim::atitude TypeSupport Object Body

 JSBSim::atitudeTypeSupport::atitudeTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_atitude__name(),
        __JSBSim_atitude__keys(),
        JSBSim::atitudeTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_atitude__copyIn,
        (gapi_copyOut) __JSBSim_atitude__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::atitudeSeq, JSBSim::atitude>,
        new  JSBSim::atitudeTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::atitudeTypeSupport::~atitudeTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::atitudeTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::atitudeTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::atitude DataWriter_impl Object Body

 JSBSim::atitudeDataWriter_impl::atitudeDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atitudeDataWriter_impl::~atitudeDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::atitudeDataWriter_impl::register_instance(
    const JSBSim::atitude & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::atitudeDataWriter_impl::register_instance_w_timestamp(
    const atitude & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::unregister_instance(
    const JSBSim::atitude & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::atitudeDataWriter_impl::unregister_instance_w_timestamp(
    const atitude & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::write(
    const JSBSim::atitude & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::write_w_timestamp(
    const atitude & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::dispose(
    const JSBSim::atitude & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::atitudeDataWriter_impl::dispose_w_timestamp(
    const atitude & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::writedispose(
    const JSBSim::atitude & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::atitudeDataWriter_impl::writedispose_w_timestamp(
    const atitude & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::atitudeDataWriter_impl::get_key_value(
    atitude & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atitudeDataWriter_impl::lookup_instance(
	const JSBSim::atitude & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::atitude DataReader_impl Object Body

 JSBSim::atitudeDataReader_impl::atitudeDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atitudeDataReader_impl::~atitudeDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::read(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::take(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::read_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::take_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::read_next_sample(
    JSBSim::atitude & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::take_next_sample(
    JSBSim::atitude & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::read_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::take_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::read_next_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::take_next_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::read_next_instance_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::take_next_instance_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReader_impl::return_loan(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::atitudeSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::get_key_value(
    JSBSim::atitude & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atitudeDataReader_impl::lookup_instance(
    const JSBSim::atitude & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::atitudeDataReader_impl::check_preconditions(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::atitude DataReaderView_impl Object Body

 JSBSim::atitudeDataReaderView_impl::atitudeDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atitudeDataReaderView_impl::~atitudeDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::read(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::take(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::read_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::take_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReaderView_impl::read_next_sample(
    JSBSim::atitude & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReaderView_impl::take_next_sample(
    JSBSim::atitude & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::read_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::take_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::read_next_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::take_next_instance(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atitudeDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::atitudeDataReaderView_impl::return_loan(
    JSBSim::atitudeSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::atitudeSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atitudeDataReaderView_impl::get_key_value(
    JSBSim::atitude & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atitudeDataReaderView_impl::lookup_instance(
    const JSBSim::atitude & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_simulation__copyIn(
    c_base base,
    struct JSBSim::simulation *from,
    struct _JSBSim_simulation *to);

extern void
__JSBSim_simulation__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::simulation TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::simulationTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::simulationDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::simulationTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::simulationDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::simulationTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::simulationDataReaderView_impl (handle);
}

// DDS JSBSim::simulation TypeSupport Object Body

 JSBSim::simulationTypeSupport::simulationTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_simulation__name(),
        __JSBSim_simulation__keys(),
        JSBSim::simulationTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_simulation__copyIn,
        (gapi_copyOut) __JSBSim_simulation__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::simulationSeq, JSBSim::simulation>,
        new  JSBSim::simulationTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::simulationTypeSupport::~simulationTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::simulationTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::simulationTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::simulation DataWriter_impl Object Body

 JSBSim::simulationDataWriter_impl::simulationDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::simulationDataWriter_impl::~simulationDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::simulationDataWriter_impl::register_instance(
    const JSBSim::simulation & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::simulationDataWriter_impl::register_instance_w_timestamp(
    const simulation & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::unregister_instance(
    const JSBSim::simulation & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::simulationDataWriter_impl::unregister_instance_w_timestamp(
    const simulation & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::write(
    const JSBSim::simulation & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::write_w_timestamp(
    const simulation & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::dispose(
    const JSBSim::simulation & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::simulationDataWriter_impl::dispose_w_timestamp(
    const simulation & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::writedispose(
    const JSBSim::simulation & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::simulationDataWriter_impl::writedispose_w_timestamp(
    const simulation & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::simulationDataWriter_impl::get_key_value(
    simulation & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::simulationDataWriter_impl::lookup_instance(
	const JSBSim::simulation & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::simulation DataReader_impl Object Body

 JSBSim::simulationDataReader_impl::simulationDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::simulationDataReader_impl::~simulationDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::read(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::take(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::read_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::take_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::read_next_sample(
    JSBSim::simulation & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::take_next_sample(
    JSBSim::simulation & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::read_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::take_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::read_next_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::take_next_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::read_next_instance_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::take_next_instance_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::simulationDataReader_impl::return_loan(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::simulationSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::get_key_value(
    JSBSim::simulation & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::simulationDataReader_impl::lookup_instance(
    const JSBSim::simulation & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::simulationDataReader_impl::check_preconditions(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::simulation DataReaderView_impl Object Body

 JSBSim::simulationDataReaderView_impl::simulationDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::simulationDataReaderView_impl::~simulationDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::read(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::take(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::read_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::take_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReaderView_impl::read_next_sample(
    JSBSim::simulation & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReaderView_impl::take_next_sample(
    JSBSim::simulation & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::read_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::take_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::read_next_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::take_next_instance(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::simulationDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::simulationDataReaderView_impl::return_loan(
    JSBSim::simulationSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::simulationSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::simulationDataReaderView_impl::get_key_value(
    JSBSim::simulation & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::simulationDataReaderView_impl::lookup_instance(
    const JSBSim::simulation & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_velocities__copyIn(
    c_base base,
    struct JSBSim::velocities *from,
    struct _JSBSim_velocities *to);

extern void
__JSBSim_velocities__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::velocities TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::velocitiesTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::velocitiesDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::velocitiesTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::velocitiesDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::velocitiesTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::velocitiesDataReaderView_impl (handle);
}

// DDS JSBSim::velocities TypeSupport Object Body

 JSBSim::velocitiesTypeSupport::velocitiesTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_velocities__name(),
        __JSBSim_velocities__keys(),
        JSBSim::velocitiesTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_velocities__copyIn,
        (gapi_copyOut) __JSBSim_velocities__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::velocitiesSeq, JSBSim::velocities>,
        new  JSBSim::velocitiesTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::velocitiesTypeSupport::~velocitiesTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::velocitiesTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::velocitiesTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::velocities DataWriter_impl Object Body

 JSBSim::velocitiesDataWriter_impl::velocitiesDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::velocitiesDataWriter_impl::~velocitiesDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::velocitiesDataWriter_impl::register_instance(
    const JSBSim::velocities & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::velocitiesDataWriter_impl::register_instance_w_timestamp(
    const velocities & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::unregister_instance(
    const JSBSim::velocities & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::velocitiesDataWriter_impl::unregister_instance_w_timestamp(
    const velocities & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::write(
    const JSBSim::velocities & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::write_w_timestamp(
    const velocities & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::dispose(
    const JSBSim::velocities & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::velocitiesDataWriter_impl::dispose_w_timestamp(
    const velocities & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::writedispose(
    const JSBSim::velocities & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataWriter_impl::writedispose_w_timestamp(
    const velocities & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::velocitiesDataWriter_impl::get_key_value(
    velocities & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::velocitiesDataWriter_impl::lookup_instance(
	const JSBSim::velocities & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::velocities DataReader_impl Object Body

 JSBSim::velocitiesDataReader_impl::velocitiesDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::velocitiesDataReader_impl::~velocitiesDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::read(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::take(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::read_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::take_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::read_next_sample(
    JSBSim::velocities & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::take_next_sample(
    JSBSim::velocities & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::read_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::take_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::read_next_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::take_next_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::read_next_instance_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::take_next_instance_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReader_impl::return_loan(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::velocitiesSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::get_key_value(
    JSBSim::velocities & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::velocitiesDataReader_impl::lookup_instance(
    const JSBSim::velocities & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::velocitiesDataReader_impl::check_preconditions(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::velocities DataReaderView_impl Object Body

 JSBSim::velocitiesDataReaderView_impl::velocitiesDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::velocitiesDataReaderView_impl::~velocitiesDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::read(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::take(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::read_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::take_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReaderView_impl::read_next_sample(
    JSBSim::velocities & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReaderView_impl::take_next_sample(
    JSBSim::velocities & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::read_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::take_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::read_next_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::take_next_instance(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::velocitiesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::velocitiesDataReaderView_impl::return_loan(
    JSBSim::velocitiesSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::velocitiesSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::velocitiesDataReaderView_impl::get_key_value(
    JSBSim::velocities & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::velocitiesDataReaderView_impl::lookup_instance(
    const JSBSim::velocities & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_atmosphere__copyIn(
    c_base base,
    struct JSBSim::atmosphere *from,
    struct _JSBSim_atmosphere *to);

extern void
__JSBSim_atmosphere__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::atmosphere TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::atmosphereTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::atmosphereDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::atmosphereTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::atmosphereDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::atmosphereTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::atmosphereDataReaderView_impl (handle);
}

// DDS JSBSim::atmosphere TypeSupport Object Body

 JSBSim::atmosphereTypeSupport::atmosphereTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_atmosphere__name(),
        __JSBSim_atmosphere__keys(),
        JSBSim::atmosphereTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_atmosphere__copyIn,
        (gapi_copyOut) __JSBSim_atmosphere__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::atmosphereSeq, JSBSim::atmosphere>,
        new  JSBSim::atmosphereTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::atmosphereTypeSupport::~atmosphereTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::atmosphereTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::atmosphereTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::atmosphere DataWriter_impl Object Body

 JSBSim::atmosphereDataWriter_impl::atmosphereDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atmosphereDataWriter_impl::~atmosphereDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::atmosphereDataWriter_impl::register_instance(
    const JSBSim::atmosphere & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::atmosphereDataWriter_impl::register_instance_w_timestamp(
    const atmosphere & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::unregister_instance(
    const JSBSim::atmosphere & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::atmosphereDataWriter_impl::unregister_instance_w_timestamp(
    const atmosphere & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::write(
    const JSBSim::atmosphere & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::write_w_timestamp(
    const atmosphere & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::dispose(
    const JSBSim::atmosphere & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::atmosphereDataWriter_impl::dispose_w_timestamp(
    const atmosphere & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::writedispose(
    const JSBSim::atmosphere & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataWriter_impl::writedispose_w_timestamp(
    const atmosphere & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::atmosphereDataWriter_impl::get_key_value(
    atmosphere & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atmosphereDataWriter_impl::lookup_instance(
	const JSBSim::atmosphere & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::atmosphere DataReader_impl Object Body

 JSBSim::atmosphereDataReader_impl::atmosphereDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atmosphereDataReader_impl::~atmosphereDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::read(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::take(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::read_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::take_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::read_next_sample(
    JSBSim::atmosphere & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::take_next_sample(
    JSBSim::atmosphere & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::read_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::take_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::read_next_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::take_next_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::read_next_instance_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::take_next_instance_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReader_impl::return_loan(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::atmosphereSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::get_key_value(
    JSBSim::atmosphere & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atmosphereDataReader_impl::lookup_instance(
    const JSBSim::atmosphere & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::atmosphereDataReader_impl::check_preconditions(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::atmosphere DataReaderView_impl Object Body

 JSBSim::atmosphereDataReaderView_impl::atmosphereDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::atmosphereDataReaderView_impl::~atmosphereDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::read(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::take(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::read_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::take_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReaderView_impl::read_next_sample(
    JSBSim::atmosphere & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReaderView_impl::take_next_sample(
    JSBSim::atmosphere & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::read_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::take_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::read_next_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::take_next_instance(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::atmosphereDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::atmosphereDataReaderView_impl::return_loan(
    JSBSim::atmosphereSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::atmosphereSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::atmosphereDataReaderView_impl::get_key_value(
    JSBSim::atmosphere & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::atmosphereDataReaderView_impl::lookup_instance(
    const JSBSim::atmosphere & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_aerosurfaces__copyIn(
    c_base base,
    struct JSBSim::aerosurfaces *from,
    struct _JSBSim_aerosurfaces *to);

extern void
__JSBSim_aerosurfaces__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::aerosurfaces TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::aerosurfacesTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::aerosurfacesDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::aerosurfacesTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::aerosurfacesDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::aerosurfacesTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::aerosurfacesDataReaderView_impl (handle);
}

// DDS JSBSim::aerosurfaces TypeSupport Object Body

 JSBSim::aerosurfacesTypeSupport::aerosurfacesTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_aerosurfaces__name(),
        __JSBSim_aerosurfaces__keys(),
        JSBSim::aerosurfacesTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_aerosurfaces__copyIn,
        (gapi_copyOut) __JSBSim_aerosurfaces__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::aerosurfacesSeq, JSBSim::aerosurfaces>,
        new  JSBSim::aerosurfacesTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerosurfacesTypeSupport::~aerosurfacesTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::aerosurfacesTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::aerosurfaces DataWriter_impl Object Body

 JSBSim::aerosurfacesDataWriter_impl::aerosurfacesDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerosurfacesDataWriter_impl::~aerosurfacesDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::aerosurfacesDataWriter_impl::register_instance(
    const JSBSim::aerosurfaces & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::aerosurfacesDataWriter_impl::register_instance_w_timestamp(
    const aerosurfaces & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::unregister_instance(
    const JSBSim::aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataWriter_impl::unregister_instance_w_timestamp(
    const aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::write(
    const JSBSim::aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::write_w_timestamp(
    const aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::dispose(
    const JSBSim::aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataWriter_impl::dispose_w_timestamp(
    const aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::writedispose(
    const JSBSim::aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataWriter_impl::writedispose_w_timestamp(
    const aerosurfaces & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataWriter_impl::get_key_value(
    aerosurfaces & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerosurfacesDataWriter_impl::lookup_instance(
	const JSBSim::aerosurfaces & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::aerosurfaces DataReader_impl Object Body

 JSBSim::aerosurfacesDataReader_impl::aerosurfacesDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerosurfacesDataReader_impl::~aerosurfacesDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::read(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::take(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::read_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::take_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::read_next_sample(
    JSBSim::aerosurfaces & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::take_next_sample(
    JSBSim::aerosurfaces & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::read_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::take_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::read_next_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::take_next_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::read_next_instance_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::take_next_instance_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReader_impl::return_loan(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aerosurfacesSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::get_key_value(
    JSBSim::aerosurfaces & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerosurfacesDataReader_impl::lookup_instance(
    const JSBSim::aerosurfaces & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReader_impl::check_preconditions(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::aerosurfaces DataReaderView_impl Object Body

 JSBSim::aerosurfacesDataReaderView_impl::aerosurfacesDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerosurfacesDataReaderView_impl::~aerosurfacesDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::read(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::take(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::read_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::take_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReaderView_impl::read_next_sample(
    JSBSim::aerosurfaces & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReaderView_impl::take_next_sample(
    JSBSim::aerosurfaces & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::read_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::take_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::read_next_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::take_next_instance(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerosurfacesDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aerosurfacesDataReaderView_impl::return_loan(
    JSBSim::aerosurfacesSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aerosurfacesSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerosurfacesDataReaderView_impl::get_key_value(
    JSBSim::aerosurfaces & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerosurfacesDataReaderView_impl::lookup_instance(
    const JSBSim::aerosurfaces & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_gears__copyIn(
    c_base base,
    struct JSBSim::gears *from,
    struct _JSBSim_gears *to);

extern void
__JSBSim_gears__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::gears TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::gearsTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::gearsDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::gearsTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::gearsDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::gearsTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::gearsDataReaderView_impl (handle);
}

// DDS JSBSim::gears TypeSupport Object Body

 JSBSim::gearsTypeSupport::gearsTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_gears__name(),
        __JSBSim_gears__keys(),
        JSBSim::gearsTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_gears__copyIn,
        (gapi_copyOut) __JSBSim_gears__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::gearsSeq, JSBSim::gears>,
        new  JSBSim::gearsTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::gearsTypeSupport::~gearsTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::gearsTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::gearsTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::gears DataWriter_impl Object Body

 JSBSim::gearsDataWriter_impl::gearsDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::gearsDataWriter_impl::~gearsDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::gearsDataWriter_impl::register_instance(
    const JSBSim::gears & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::gearsDataWriter_impl::register_instance_w_timestamp(
    const gears & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::unregister_instance(
    const JSBSim::gears & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::gearsDataWriter_impl::unregister_instance_w_timestamp(
    const gears & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::write(
    const JSBSim::gears & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::write_w_timestamp(
    const gears & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::dispose(
    const JSBSim::gears & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::gearsDataWriter_impl::dispose_w_timestamp(
    const gears & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::writedispose(
    const JSBSim::gears & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::gearsDataWriter_impl::writedispose_w_timestamp(
    const gears & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::gearsDataWriter_impl::get_key_value(
    gears & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::gearsDataWriter_impl::lookup_instance(
	const JSBSim::gears & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::gears DataReader_impl Object Body

 JSBSim::gearsDataReader_impl::gearsDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::gearsDataReader_impl::~gearsDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::read(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::take(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::read_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::take_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::read_next_sample(
    JSBSim::gears & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::take_next_sample(
    JSBSim::gears & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::read_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::take_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::read_next_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::take_next_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::read_next_instance_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::take_next_instance_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::gearsDataReader_impl::return_loan(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::gearsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::get_key_value(
    JSBSim::gears & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::gearsDataReader_impl::lookup_instance(
    const JSBSim::gears & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::gearsDataReader_impl::check_preconditions(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::gears DataReaderView_impl Object Body

 JSBSim::gearsDataReaderView_impl::gearsDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::gearsDataReaderView_impl::~gearsDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::read(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::take(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::read_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::take_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReaderView_impl::read_next_sample(
    JSBSim::gears & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReaderView_impl::take_next_sample(
    JSBSim::gears & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::read_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::take_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::read_next_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::take_next_instance(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::gearsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::gearsDataReaderView_impl::return_loan(
    JSBSim::gearsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::gearsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::gearsDataReaderView_impl::get_key_value(
    JSBSim::gears & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::gearsDataReaderView_impl::lookup_instance(
    const JSBSim::gears & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_inertia__copyIn(
    c_base base,
    struct JSBSim::inertia *from,
    struct _JSBSim_inertia *to);

extern void
__JSBSim_inertia__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::inertia TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::inertiaTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::inertiaDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::inertiaTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::inertiaDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::inertiaTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::inertiaDataReaderView_impl (handle);
}

// DDS JSBSim::inertia TypeSupport Object Body

 JSBSim::inertiaTypeSupport::inertiaTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_inertia__name(),
        __JSBSim_inertia__keys(),
        JSBSim::inertiaTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_inertia__copyIn,
        (gapi_copyOut) __JSBSim_inertia__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::inertiaSeq, JSBSim::inertia>,
        new  JSBSim::inertiaTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::inertiaTypeSupport::~inertiaTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::inertiaTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::inertiaTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::inertia DataWriter_impl Object Body

 JSBSim::inertiaDataWriter_impl::inertiaDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::inertiaDataWriter_impl::~inertiaDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::inertiaDataWriter_impl::register_instance(
    const JSBSim::inertia & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::inertiaDataWriter_impl::register_instance_w_timestamp(
    const inertia & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::unregister_instance(
    const JSBSim::inertia & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::inertiaDataWriter_impl::unregister_instance_w_timestamp(
    const inertia & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::write(
    const JSBSim::inertia & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::write_w_timestamp(
    const inertia & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::dispose(
    const JSBSim::inertia & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::inertiaDataWriter_impl::dispose_w_timestamp(
    const inertia & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::writedispose(
    const JSBSim::inertia & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::inertiaDataWriter_impl::writedispose_w_timestamp(
    const inertia & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::inertiaDataWriter_impl::get_key_value(
    inertia & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::inertiaDataWriter_impl::lookup_instance(
	const JSBSim::inertia & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::inertia DataReader_impl Object Body

 JSBSim::inertiaDataReader_impl::inertiaDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::inertiaDataReader_impl::~inertiaDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::read(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::take(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::read_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::take_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::read_next_sample(
    JSBSim::inertia & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::take_next_sample(
    JSBSim::inertia & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::read_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::take_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::read_next_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::take_next_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::read_next_instance_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::take_next_instance_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReader_impl::return_loan(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::inertiaSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::get_key_value(
    JSBSim::inertia & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::inertiaDataReader_impl::lookup_instance(
    const JSBSim::inertia & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::inertiaDataReader_impl::check_preconditions(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::inertia DataReaderView_impl Object Body

 JSBSim::inertiaDataReaderView_impl::inertiaDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::inertiaDataReaderView_impl::~inertiaDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::read(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::take(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::read_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::take_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReaderView_impl::read_next_sample(
    JSBSim::inertia & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReaderView_impl::take_next_sample(
    JSBSim::inertia & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::read_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::take_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::read_next_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::take_next_instance(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::inertiaDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::inertiaDataReaderView_impl::return_loan(
    JSBSim::inertiaSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::inertiaSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::inertiaDataReaderView_impl::get_key_value(
    JSBSim::inertia & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::inertiaDataReaderView_impl::lookup_instance(
    const JSBSim::inertia & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_aero__copyIn(
    c_base base,
    struct JSBSim::aero *from,
    struct _JSBSim_aero *to);

extern void
__JSBSim_aero__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::aero TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::aeroTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::aeroDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::aeroTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::aeroDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::aeroTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::aeroDataReaderView_impl (handle);
}

// DDS JSBSim::aero TypeSupport Object Body

 JSBSim::aeroTypeSupport::aeroTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_aero__name(),
        __JSBSim_aero__keys(),
        JSBSim::aeroTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_aero__copyIn,
        (gapi_copyOut) __JSBSim_aero__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::aeroSeq, JSBSim::aero>,
        new  JSBSim::aeroTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::aeroTypeSupport::~aeroTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::aeroTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::aeroTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::aero DataWriter_impl Object Body

 JSBSim::aeroDataWriter_impl::aeroDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aeroDataWriter_impl::~aeroDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::aeroDataWriter_impl::register_instance(
    const JSBSim::aero & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::aeroDataWriter_impl::register_instance_w_timestamp(
    const aero & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::unregister_instance(
    const JSBSim::aero & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aeroDataWriter_impl::unregister_instance_w_timestamp(
    const aero & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::write(
    const JSBSim::aero & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::write_w_timestamp(
    const aero & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::dispose(
    const JSBSim::aero & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aeroDataWriter_impl::dispose_w_timestamp(
    const aero & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::writedispose(
    const JSBSim::aero & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aeroDataWriter_impl::writedispose_w_timestamp(
    const aero & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::aeroDataWriter_impl::get_key_value(
    aero & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aeroDataWriter_impl::lookup_instance(
	const JSBSim::aero & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::aero DataReader_impl Object Body

 JSBSim::aeroDataReader_impl::aeroDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aeroDataReader_impl::~aeroDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::read(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::take(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::read_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::take_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::read_next_sample(
    JSBSim::aero & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::take_next_sample(
    JSBSim::aero & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::read_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::take_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::read_next_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::take_next_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::read_next_instance_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::take_next_instance_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aeroDataReader_impl::return_loan(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aeroSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::get_key_value(
    JSBSim::aero & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aeroDataReader_impl::lookup_instance(
    const JSBSim::aero & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::aeroDataReader_impl::check_preconditions(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::aero DataReaderView_impl Object Body

 JSBSim::aeroDataReaderView_impl::aeroDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aeroDataReaderView_impl::~aeroDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::read(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::take(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::read_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::take_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReaderView_impl::read_next_sample(
    JSBSim::aero & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReaderView_impl::take_next_sample(
    JSBSim::aero & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::read_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::take_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::read_next_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::take_next_instance(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aeroDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aeroDataReaderView_impl::return_loan(
    JSBSim::aeroSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aeroSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aeroDataReaderView_impl::get_key_value(
    JSBSim::aero & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aeroDataReaderView_impl::lookup_instance(
    const JSBSim::aero & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_aerocoefficient__copyIn(
    c_base base,
    struct JSBSim::aerocoefficient *from,
    struct _JSBSim_aerocoefficient *to);

extern void
__JSBSim_aerocoefficient__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::aerocoefficient TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::aerocoefficientTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::aerocoefficientDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::aerocoefficientTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::aerocoefficientDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::aerocoefficientTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::aerocoefficientDataReaderView_impl (handle);
}

// DDS JSBSim::aerocoefficient TypeSupport Object Body

 JSBSim::aerocoefficientTypeSupport::aerocoefficientTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_aerocoefficient__name(),
        __JSBSim_aerocoefficient__keys(),
        JSBSim::aerocoefficientTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_aerocoefficient__copyIn,
        (gapi_copyOut) __JSBSim_aerocoefficient__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::aerocoefficientSeq, JSBSim::aerocoefficient>,
        new  JSBSim::aerocoefficientTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerocoefficientTypeSupport::~aerocoefficientTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::aerocoefficientTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::aerocoefficient DataWriter_impl Object Body

 JSBSim::aerocoefficientDataWriter_impl::aerocoefficientDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerocoefficientDataWriter_impl::~aerocoefficientDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::aerocoefficientDataWriter_impl::register_instance(
    const JSBSim::aerocoefficient & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::aerocoefficientDataWriter_impl::register_instance_w_timestamp(
    const aerocoefficient & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::unregister_instance(
    const JSBSim::aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataWriter_impl::unregister_instance_w_timestamp(
    const aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::write(
    const JSBSim::aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::write_w_timestamp(
    const aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::dispose(
    const JSBSim::aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataWriter_impl::dispose_w_timestamp(
    const aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::writedispose(
    const JSBSim::aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataWriter_impl::writedispose_w_timestamp(
    const aerocoefficient & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataWriter_impl::get_key_value(
    aerocoefficient & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerocoefficientDataWriter_impl::lookup_instance(
	const JSBSim::aerocoefficient & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::aerocoefficient DataReader_impl Object Body

 JSBSim::aerocoefficientDataReader_impl::aerocoefficientDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerocoefficientDataReader_impl::~aerocoefficientDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::read(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::take(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::read_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::take_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::read_next_sample(
    JSBSim::aerocoefficient & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::take_next_sample(
    JSBSim::aerocoefficient & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::read_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::take_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::read_next_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::take_next_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::read_next_instance_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::take_next_instance_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReader_impl::return_loan(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aerocoefficientSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::get_key_value(
    JSBSim::aerocoefficient & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerocoefficientDataReader_impl::lookup_instance(
    const JSBSim::aerocoefficient & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReader_impl::check_preconditions(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::aerocoefficient DataReaderView_impl Object Body

 JSBSim::aerocoefficientDataReaderView_impl::aerocoefficientDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::aerocoefficientDataReaderView_impl::~aerocoefficientDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::read(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::take(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::read_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::take_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReaderView_impl::read_next_sample(
    JSBSim::aerocoefficient & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReaderView_impl::take_next_sample(
    JSBSim::aerocoefficient & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::read_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::take_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::read_next_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::take_next_instance(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::aerocoefficientDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::aerocoefficientDataReaderView_impl::return_loan(
    JSBSim::aerocoefficientSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::aerocoefficientSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::aerocoefficientDataReaderView_impl::get_key_value(
    JSBSim::aerocoefficient & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::aerocoefficientDataReaderView_impl::lookup_instance(
    const JSBSim::aerocoefficient & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_geometric__copyIn(
    c_base base,
    struct JSBSim::geometric *from,
    struct _JSBSim_geometric *to);

extern void
__JSBSim_geometric__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::geometric TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::geometricTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::geometricDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::geometricTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::geometricDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::geometricTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::geometricDataReaderView_impl (handle);
}

// DDS JSBSim::geometric TypeSupport Object Body

 JSBSim::geometricTypeSupport::geometricTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_geometric__name(),
        __JSBSim_geometric__keys(),
        JSBSim::geometricTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_geometric__copyIn,
        (gapi_copyOut) __JSBSim_geometric__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::geometricSeq, JSBSim::geometric>,
        new  JSBSim::geometricTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::geometricTypeSupport::~geometricTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::geometricTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::geometricTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::geometric DataWriter_impl Object Body

 JSBSim::geometricDataWriter_impl::geometricDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::geometricDataWriter_impl::~geometricDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::geometricDataWriter_impl::register_instance(
    const JSBSim::geometric & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::geometricDataWriter_impl::register_instance_w_timestamp(
    const geometric & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::unregister_instance(
    const JSBSim::geometric & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::geometricDataWriter_impl::unregister_instance_w_timestamp(
    const geometric & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::write(
    const JSBSim::geometric & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::write_w_timestamp(
    const geometric & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::dispose(
    const JSBSim::geometric & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::geometricDataWriter_impl::dispose_w_timestamp(
    const geometric & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::writedispose(
    const JSBSim::geometric & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::geometricDataWriter_impl::writedispose_w_timestamp(
    const geometric & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::geometricDataWriter_impl::get_key_value(
    geometric & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::geometricDataWriter_impl::lookup_instance(
	const JSBSim::geometric & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::geometric DataReader_impl Object Body

 JSBSim::geometricDataReader_impl::geometricDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::geometricDataReader_impl::~geometricDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::read(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::take(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::read_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::take_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::read_next_sample(
    JSBSim::geometric & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::take_next_sample(
    JSBSim::geometric & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::read_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::take_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::read_next_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::take_next_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::read_next_instance_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::take_next_instance_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::geometricDataReader_impl::return_loan(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::geometricSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::get_key_value(
    JSBSim::geometric & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::geometricDataReader_impl::lookup_instance(
    const JSBSim::geometric & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::geometricDataReader_impl::check_preconditions(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::geometric DataReaderView_impl Object Body

 JSBSim::geometricDataReaderView_impl::geometricDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::geometricDataReaderView_impl::~geometricDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::read(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::take(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::read_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::take_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReaderView_impl::read_next_sample(
    JSBSim::geometric & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReaderView_impl::take_next_sample(
    JSBSim::geometric & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::read_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::take_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::read_next_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::take_next_instance(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::geometricDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::geometricDataReaderView_impl::return_loan(
    JSBSim::geometricSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::geometricSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::geometricDataReaderView_impl::get_key_value(
    JSBSim::geometric & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::geometricDataReaderView_impl::lookup_instance(
    const JSBSim::geometric & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_propulsion__copyIn(
    c_base base,
    struct JSBSim::propulsion *from,
    struct _JSBSim_propulsion *to);

extern void
__JSBSim_propulsion__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::propulsion TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::propulsionTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::propulsionDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::propulsionTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::propulsionDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::propulsionTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::propulsionDataReaderView_impl (handle);
}

// DDS JSBSim::propulsion TypeSupport Object Body

 JSBSim::propulsionTypeSupport::propulsionTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_propulsion__name(),
        __JSBSim_propulsion__keys(),
        JSBSim::propulsionTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_propulsion__copyIn,
        (gapi_copyOut) __JSBSim_propulsion__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::propulsionSeq, JSBSim::propulsion>,
        new  JSBSim::propulsionTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::propulsionTypeSupport::~propulsionTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::propulsionTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::propulsionTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::propulsion DataWriter_impl Object Body

 JSBSim::propulsionDataWriter_impl::propulsionDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::propulsionDataWriter_impl::~propulsionDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::propulsionDataWriter_impl::register_instance(
    const JSBSim::propulsion & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::propulsionDataWriter_impl::register_instance_w_timestamp(
    const propulsion & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::unregister_instance(
    const JSBSim::propulsion & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::propulsionDataWriter_impl::unregister_instance_w_timestamp(
    const propulsion & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::write(
    const JSBSim::propulsion & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::write_w_timestamp(
    const propulsion & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::dispose(
    const JSBSim::propulsion & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::propulsionDataWriter_impl::dispose_w_timestamp(
    const propulsion & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::writedispose(
    const JSBSim::propulsion & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::propulsionDataWriter_impl::writedispose_w_timestamp(
    const propulsion & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::propulsionDataWriter_impl::get_key_value(
    propulsion & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::propulsionDataWriter_impl::lookup_instance(
	const JSBSim::propulsion & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::propulsion DataReader_impl Object Body

 JSBSim::propulsionDataReader_impl::propulsionDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::propulsionDataReader_impl::~propulsionDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::read(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::take(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::read_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::take_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::read_next_sample(
    JSBSim::propulsion & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::take_next_sample(
    JSBSim::propulsion & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::read_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::take_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::read_next_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::take_next_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::read_next_instance_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::take_next_instance_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReader_impl::return_loan(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::propulsionSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::get_key_value(
    JSBSim::propulsion & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::propulsionDataReader_impl::lookup_instance(
    const JSBSim::propulsion & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::propulsionDataReader_impl::check_preconditions(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::propulsion DataReaderView_impl Object Body

 JSBSim::propulsionDataReaderView_impl::propulsionDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::propulsionDataReaderView_impl::~propulsionDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::read(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::take(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::read_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::take_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReaderView_impl::read_next_sample(
    JSBSim::propulsion & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReaderView_impl::take_next_sample(
    JSBSim::propulsion & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::read_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::take_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::read_next_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::take_next_instance(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::propulsionDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::propulsionDataReaderView_impl::return_loan(
    JSBSim::propulsionSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::propulsionSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::propulsionDataReaderView_impl::get_key_value(
    JSBSim::propulsion & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::propulsionDataReaderView_impl::lookup_instance(
    const JSBSim::propulsion & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_initialConditions__copyIn(
    c_base base,
    struct JSBSim::initialConditions *from,
    struct _JSBSim_initialConditions *to);

extern void
__JSBSim_initialConditions__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::initialConditions TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::initialConditionsTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::initialConditionsDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::initialConditionsTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::initialConditionsDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::initialConditionsTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::initialConditionsDataReaderView_impl (handle);
}

// DDS JSBSim::initialConditions TypeSupport Object Body

 JSBSim::initialConditionsTypeSupport::initialConditionsTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_initialConditions__name(),
        __JSBSim_initialConditions__keys(),
        JSBSim::initialConditionsTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_initialConditions__copyIn,
        (gapi_copyOut) __JSBSim_initialConditions__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::initialConditionsSeq, JSBSim::initialConditions>,
        new  JSBSim::initialConditionsTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::initialConditionsTypeSupport::~initialConditionsTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::initialConditionsTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::initialConditionsTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::initialConditions DataWriter_impl Object Body

 JSBSim::initialConditionsDataWriter_impl::initialConditionsDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::initialConditionsDataWriter_impl::~initialConditionsDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::initialConditionsDataWriter_impl::register_instance(
    const JSBSim::initialConditions & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::initialConditionsDataWriter_impl::register_instance_w_timestamp(
    const initialConditions & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::unregister_instance(
    const JSBSim::initialConditions & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::initialConditionsDataWriter_impl::unregister_instance_w_timestamp(
    const initialConditions & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::write(
    const JSBSim::initialConditions & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::write_w_timestamp(
    const initialConditions & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::dispose(
    const JSBSim::initialConditions & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::initialConditionsDataWriter_impl::dispose_w_timestamp(
    const initialConditions & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::writedispose(
    const JSBSim::initialConditions & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataWriter_impl::writedispose_w_timestamp(
    const initialConditions & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::initialConditionsDataWriter_impl::get_key_value(
    initialConditions & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::initialConditionsDataWriter_impl::lookup_instance(
	const JSBSim::initialConditions & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::initialConditions DataReader_impl Object Body

 JSBSim::initialConditionsDataReader_impl::initialConditionsDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::initialConditionsDataReader_impl::~initialConditionsDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::read(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::take(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::read_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::take_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::read_next_sample(
    JSBSim::initialConditions & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::take_next_sample(
    JSBSim::initialConditions & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::read_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::take_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::read_next_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::take_next_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::read_next_instance_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::take_next_instance_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReader_impl::return_loan(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::initialConditionsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::get_key_value(
    JSBSim::initialConditions & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::initialConditionsDataReader_impl::lookup_instance(
    const JSBSim::initialConditions & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReader_impl::check_preconditions(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::initialConditions DataReaderView_impl Object Body

 JSBSim::initialConditionsDataReaderView_impl::initialConditionsDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::initialConditionsDataReaderView_impl::~initialConditionsDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::read(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::take(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::read_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::take_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReaderView_impl::read_next_sample(
    JSBSim::initialConditions & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReaderView_impl::take_next_sample(
    JSBSim::initialConditions & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::read_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::take_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::read_next_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::take_next_instance(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::initialConditionsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::initialConditionsDataReaderView_impl::return_loan(
    JSBSim::initialConditionsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::initialConditionsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::initialConditionsDataReaderView_impl::get_key_value(
    JSBSim::initialConditions & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::initialConditionsDataReaderView_impl::lookup_instance(
    const JSBSim::initialConditions & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_subSystems__copyIn(
    c_base base,
    struct JSBSim::subSystems *from,
    struct _JSBSim_subSystems *to);

extern void
__JSBSim_subSystems__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::subSystems TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::subSystemsTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::subSystemsDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::subSystemsTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::subSystemsDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::subSystemsTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::subSystemsDataReaderView_impl (handle);
}

// DDS JSBSim::subSystems TypeSupport Object Body

 JSBSim::subSystemsTypeSupport::subSystemsTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_subSystems__name(),
        __JSBSim_subSystems__keys(),
        JSBSim::subSystemsTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_subSystems__copyIn,
        (gapi_copyOut) __JSBSim_subSystems__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::subSystemsSeq, JSBSim::subSystems>,
        new  JSBSim::subSystemsTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemsTypeSupport::~subSystemsTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::subSystemsTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::subSystemsTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::subSystems DataWriter_impl Object Body

 JSBSim::subSystemsDataWriter_impl::subSystemsDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemsDataWriter_impl::~subSystemsDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::subSystemsDataWriter_impl::register_instance(
    const JSBSim::subSystems & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemsDataWriter_impl::register_instance_w_timestamp(
    const subSystems & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::unregister_instance(
    const JSBSim::subSystems & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::subSystemsDataWriter_impl::unregister_instance_w_timestamp(
    const subSystems & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::write(
    const JSBSim::subSystems & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::write_w_timestamp(
    const subSystems & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::dispose(
    const JSBSim::subSystems & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::subSystemsDataWriter_impl::dispose_w_timestamp(
    const subSystems & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::writedispose(
    const JSBSim::subSystems & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataWriter_impl::writedispose_w_timestamp(
    const subSystems & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::subSystemsDataWriter_impl::get_key_value(
    subSystems & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemsDataWriter_impl::lookup_instance(
	const JSBSim::subSystems & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::subSystems DataReader_impl Object Body

 JSBSim::subSystemsDataReader_impl::subSystemsDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemsDataReader_impl::~subSystemsDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::read(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::take(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::read_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::take_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::read_next_sample(
    JSBSim::subSystems & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::take_next_sample(
    JSBSim::subSystems & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::read_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::take_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::read_next_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::take_next_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::read_next_instance_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::take_next_instance_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReader_impl::return_loan(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::subSystemsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::get_key_value(
    JSBSim::subSystems & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemsDataReader_impl::lookup_instance(
    const JSBSim::subSystems & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::subSystemsDataReader_impl::check_preconditions(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::subSystems DataReaderView_impl Object Body

 JSBSim::subSystemsDataReaderView_impl::subSystemsDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemsDataReaderView_impl::~subSystemsDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::read(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::take(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::read_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::take_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReaderView_impl::read_next_sample(
    JSBSim::subSystems & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReaderView_impl::take_next_sample(
    JSBSim::subSystems & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::read_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::take_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::read_next_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::take_next_instance(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemsDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::subSystemsDataReaderView_impl::return_loan(
    JSBSim::subSystemsSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::subSystemsSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemsDataReaderView_impl::get_key_value(
    JSBSim::subSystems & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemsDataReaderView_impl::lookup_instance(
    const JSBSim::subSystems & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



extern c_bool
__JSBSim_subSystemOut__copyIn(
    c_base base,
    struct JSBSim::subSystemOut *from,
    struct _JSBSim_subSystemOut *to);

extern void
__JSBSim_subSystemOut__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::subSystemOut TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::subSystemOutTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::subSystemOutDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::subSystemOutTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::subSystemOutDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::subSystemOutTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::subSystemOutDataReaderView_impl (handle);
}

// DDS JSBSim::subSystemOut TypeSupport Object Body

 JSBSim::subSystemOutTypeSupport::subSystemOutTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_subSystemOut__name(),
        __JSBSim_subSystemOut__keys(),
        JSBSim::subSystemOutTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_subSystemOut__copyIn,
        (gapi_copyOut) __JSBSim_subSystemOut__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::subSystemOutSeq, JSBSim::subSystemOut>,
        new  JSBSim::subSystemOutTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemOutTypeSupport::~subSystemOutTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::subSystemOutTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::subSystemOutTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::subSystemOut DataWriter_impl Object Body

 JSBSim::subSystemOutDataWriter_impl::subSystemOutDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemOutDataWriter_impl::~subSystemOutDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::subSystemOutDataWriter_impl::register_instance(
    const JSBSim::subSystemOut & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemOutDataWriter_impl::register_instance_w_timestamp(
    const subSystemOut & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::unregister_instance(
    const JSBSim::subSystemOut & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::subSystemOutDataWriter_impl::unregister_instance_w_timestamp(
    const subSystemOut & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::write(
    const JSBSim::subSystemOut & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::write_w_timestamp(
    const subSystemOut & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::dispose(
    const JSBSim::subSystemOut & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::subSystemOutDataWriter_impl::dispose_w_timestamp(
    const subSystemOut & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::writedispose(
    const JSBSim::subSystemOut & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataWriter_impl::writedispose_w_timestamp(
    const subSystemOut & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::subSystemOutDataWriter_impl::get_key_value(
    subSystemOut & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemOutDataWriter_impl::lookup_instance(
	const JSBSim::subSystemOut & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::subSystemOut DataReader_impl Object Body

 JSBSim::subSystemOutDataReader_impl::subSystemOutDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemOutDataReader_impl::~subSystemOutDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::read(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::take(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::read_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::take_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::read_next_sample(
    JSBSim::subSystemOut & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::take_next_sample(
    JSBSim::subSystemOut & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::read_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::take_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::read_next_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::take_next_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::read_next_instance_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::take_next_instance_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReader_impl::return_loan(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::subSystemOutSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::get_key_value(
    JSBSim::subSystemOut & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemOutDataReader_impl::lookup_instance(
    const JSBSim::subSystemOut & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReader_impl::check_preconditions(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS JSBSim::subSystemOut DataReaderView_impl Object Body

 JSBSim::subSystemOutDataReaderView_impl::subSystemOutDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::subSystemOutDataReaderView_impl::~subSystemOutDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::read(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::take(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::read_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::take_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReaderView_impl::read_next_sample(
    JSBSim::subSystemOut & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReaderView_impl::take_next_sample(
    JSBSim::subSystemOut & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::read_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::take_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::read_next_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::take_next_instance(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::subSystemOutDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::subSystemOutDataReaderView_impl::return_loan(
    JSBSim::subSystemOutSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        JSBSim::subSystemOutSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::subSystemOutDataReaderView_impl::get_key_value(
    JSBSim::subSystemOut & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::subSystemOutDataReaderView_impl::lookup_instance(
    const JSBSim::subSystemOut & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::JSBSim::positionTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"position\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"epa_rad\"><Double/></Member><Member name=\"h_sl_ft\"><Double/></Member><Member name=\"h_sl_meters\">"
"<Double/></Member><Member name=\"lat_gc_rad\"><Double/></Member><Member name=\"long_gc_rad\"><Double/>"
"</Member><Member name=\"lat_gc_deg\"><Double/></Member><Member name=\"long_gc_deg\"><Double/></Member>"
"<Member name=\"lat_geod_rad\"><Double/></Member><Member name=\"lat_geod_deg\"><Double/></Member><Member name=\"geod_alt_ft\">"
"<Double/></Member><Member name=\"h_agl_ft\"><Double/></Member><Member name=\"radius_to_vehicle_ft\"><Double/>"
"</Member><Member name=\"terrain_elevation_asl_ft\"><Double/></Member><Member name=\"distance_from_start_lon_mt\">"
"<Double/></Member><Member name=\"distance_from_start_lat_mt\"><Double/></Member><Member name=\"distance_from_start_mag_mt\">"
"<Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::accelerationsTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"accelerations\"><Member name=\"ID\">"
"<Long/></Member><Member name=\"pdot_rad_sec2\"><Double/></Member><Member name=\"qdot_rad_sec2\"><Double/>"
"</Member><Member name=\"rdot_rad_sec2\"><Double/></Member><Member name=\"udot_ft_sec2\"><Double/></Member>"
"<Member name=\"vdot_ft_sec2\"><Double/></Member><Member name=\"wdot_ft_sec2\"><Double/></Member><Member name=\"a_pilot_x_ft_sec2\">"
"<Double/></Member><Member name=\"a_pilot_y_ft_sec2\"><Double/></Member><Member name=\"a_pilot_z_ft_sec2\">"
"<Double/></Member><Member name=\"n_pilot_x_norm\"><Double/></Member><Member name=\"n_pilot_y_norm\"><Double/>"
"</Member><Member name=\"n_pilot_z_norm\"><Double/></Member><Member name=\"Nz\"><Double/></Member></Struct>"
"</Module></MetaData>";
const char * ::JSBSim::atitudeTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"atitude\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"phi_rad\"><Double/></Member><Member name=\"theta_rad\"><Double/></Member><Member name=\"psi_rad\">"
"<Double/></Member><Member name=\"roll_rad\"><Double/></Member><Member name=\"pitch_rad\"><Double/></Member>"
"<Member name=\"heading_true_rad\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::simulationTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"simulation\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"integrator_rate_rotational\"><Double/></Member><Member name=\"integrator_rate_translational\">"
"<Double/></Member><Member name=\"integrator_position_rotational\"><Double/></Member><Member name=\"integrator_position_translational\">"
"<Double/></Member><Member name=\"write_state_file\"><Double/></Member><Member name=\"do_simple_trim\">"
"<Double/></Member><Member name=\"reset\"><Double/></Member><Member name=\"terminate\"><Double/></Member>"
"<Member name=\"frame_start_time\"><Double/></Member><Member name=\"cycle_duration\"><Double/></Member>"
"<Member name=\"flight_path_gamma_rad\"><Double/></Member><Member name=\"flight_path_psi_gt_rad\"><Double/>"
"</Member></Struct></Module></MetaData>";
const char * ::JSBSim::velocitiesTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"velocities\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"h_dot_fps\"><Double/></Member><Member name=\"v_north_fps\"><Double/></Member>"
"<Member name=\"v_east_fps\"><Double/></Member><Member name=\"v_down_fps\"><Double/></Member><Member name=\"u_fps\">"
"<Double/></Member><Member name=\"v_fps\"><Double/></Member><Member name=\"w_fps\"><Double/></Member><Member name=\"p_rad_sec\">"
"<Double/></Member><Member name=\"q_rad_sec\"><Double/></Member><Member name=\"r_rad_sec\"><Double/></Member>"
"<Member name=\"pi_rad_sec\"><Double/></Member><Member name=\"qi_rad_sec\"><Double/></Member><Member name=\"ri_rad_sec\">"
"<Double/></Member><Member name=\"eci_velocity_mag_fps\"><Double/></Member><Member name=\"vc_fps\"><Double/>"
"</Member><Member name=\"vc_kts\"><Double/></Member><Member name=\"ve_fps\"><Double/></Member><Member name=\"ve_kts\">"
"<Double/></Member><Member name=\"machU\"><Double/></Member><Member name=\"p_aero_rad_sec\"><Double/></Member>"
"<Member name=\"q_aero_rad_sec\"><Double/></Member><Member name=\"r_aero_rad_sec\"><Double/></Member><Member name=\"phidot_rad_sec\">"
"<Double/></Member><Member name=\"thetadot_rad_sec\"><Double/></Member><Member name=\"psidot_rad_sec\">"
"<Double/></Member><Member name=\"u_aero_fps\"><Double/></Member><Member name=\"v_aero_fps\"><Double/>"
"</Member><Member name=\"w_aero_fps\"><Double/></Member><Member name=\"vt_fps\"><Double/></Member><Member name=\"mach\">"
"<Double/></Member><Member name=\"vg_fps\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::atmosphereTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"atmosphere\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"T_R\"><Double/></Member><Member name=\"rho_slugs_ft3\"><Double/></Member><Member name=\"P_psf\">"
"<Double/></Member><Member name=\"a_fps\"><Double/></Member><Member name=\"T_sl_R\"><Double/></Member>"
"<Member name=\"rho_sl_slugs_ft3\"><Double/></Member><Member name=\"P_sl_psf\"><Double/></Member><Member name=\"a_sl_fps\">"
"<Double/></Member><Member name=\"theta\"><Double/></Member><Member name=\"sigma\"><Double/></Member><Member name=\"delta\">"
"<Double/></Member><Member name=\"a_ratio\"><Double/></Member><Member name=\"psiw_rad\"><Double/></Member>"
"<Member name=\"delta_T\"><Double/></Member><Member name=\"T_sl_dev_F\"><Double/></Member><Member name=\"density_altitude\">"
"<Double/></Member><Member name=\"wind_north_fps\"><Double/></Member><Member name=\"wind_east_fps\"><Double/>"
"</Member><Member name=\"wind_down_fps\"><Double/></Member><Member name=\"wind_mag_fps\"><Double/></Member>"
"<Member name=\"total_wind_north_fps\"><Double/></Member><Member name=\"total_wind_east_fps\"><Double/>"
"</Member><Member name=\"total_wind_down_fps\"><Double/></Member><Member name=\"gust_north_fps\"><Double/>"
"</Member><Member name=\"gust_east_fps\"><Double/></Member><Member name=\"gust_down_fps\"><Double/></Member>"
"<Member name=\"p_turb_rad_sec\"><Double/></Member><Member name=\"q_turb_rad_sec\"><Double/></Member><Member name=\"r_turb_rad_sec\">"
"<Double/></Member><Member name=\"turb_rate\"><Double/></Member><Member name=\"turb_gain\"><Double/></Member>"
"<Member name=\"turb_rhythmicity\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::aerosurfacesTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"aerosurfaces\"><Member name=\"ID\">"
"<Long/></Member><Member name=\"aileron_cmd_norm\"><Double/></Member><Member name=\"elevator_cmd_norm\">"
"<Double/></Member><Member name=\"rudder_cmd_norm\"><Double/></Member><Member name=\"flap_cmd_norm\"><Double/>"
"</Member><Member name=\"speedbrake_cmd_norm\"><Double/></Member><Member name=\"spoiler_cmd_norm\"><Double/>"
"</Member><Member name=\"pitch_trim_cmd_norm\"><Double/></Member><Member name=\"roll_trim_cmd_norm\"><Double/>"
"</Member><Member name=\"yaw_trim_cmd_norm\"><Double/></Member><Member name=\"left_aileron_pos_rad\"><Double/>"
"</Member><Member name=\"left_aileron_pos_deg\"><Double/></Member><Member name=\"left_aileron_pos_norm\">"
"<Double/></Member><Member name=\"mag_left_aileron_pos_rad\"><Double/></Member><Member name=\"right_aileron_pos_rad\">"
"<Double/></Member><Member name=\"right_aileron_pos_deg\"><Double/></Member><Member name=\"right_aileron_pos_norm\">"
"<Double/></Member><Member name=\"mag_right_aileron_pos_rad\"><Double/></Member><Member name=\"elevator_pos_rad\">"
"<Double/></Member><Member name=\"elevator_pos_deg\"><Double/></Member><Member name=\"elevator_pos_norm\">"
"<Double/></Member><Member name=\"mag_elevator_pos_rad\"><Double/></Member><Member name=\"rudder_pos_rad\">"
"<Double/></Member><Member name=\"rudder_pos_deg\"><Double/></Member><Member name=\"rudder_pos_norm\">"
"<Double/></Member><Member name=\"mag_rudder_pos_rad\"><Double/></Member><Member name=\"flap_pos_rad\">"
"<Double/></Member><Member name=\"flap_pos_deg\"><Double/></Member><Member name=\"flap_pos_norm\"><Double/>"
"</Member><Member name=\"speedbrake_pos_rad\"><Double/></Member><Member name=\"speedbrake_pos_deg\"><Double/>"
"</Member><Member name=\"speedbrake_pos_norm\"><Double/></Member><Member name=\"mag_speedbrake_pos_rad\">"
"<Double/></Member><Member name=\"spoiler_pos_rad\"><Double/></Member><Member name=\"spoiler_pos_deg\">"
"<Double/></Member><Member name=\"spoiler_pos_norm\"><Double/></Member><Member name=\"mag_spoiler_pos_rad\">"
"<Double/></Member><Member name=\"left_brake_cmd_norm\"><Double/></Member><Member name=\"right_brake_cmd_norm\">"
"<Double/></Member><Member name=\"center_brake_cmd_norm\"><Double/></Member><Member name=\"steer_cmd_norm\">"
"<Double/></Member><Member name=\"wing_fold_pos_norm\"><Double/></Member><Member name=\"throttle_cmd_norm\">"
"<Double/></Member><Member name=\"throttle_pos_norm\"><Double/></Member><Member name=\"mixture_cmd_norm\">"
"<Double/></Member><Member name=\"mixture_pos_norm\"><Double/></Member><Member name=\"advance_cmd_norm\">"
"<Double/></Member><Member name=\"advance_pos_norm\"><Double/></Member><Member name=\"feather_cmd_norm\">"
"<Double/></Member><Member name=\"feather_pos_norm\"><Double/></Member><Member name=\"steer_pos_deg\">"
"<Double/></Member><Member name=\"alpha_norm\"><Double/></Member><Member name=\"elevator_cmd_limiter\">"
"<Double/></Member><Member name=\"g_load_norm\"><Double/></Member><Member name=\"alpha_limiter\"><Double/>"
"</Member><Member name=\"g_load_error\"><Double/></Member><Member name=\"g_load_p\"><Double/></Member>"
"<Member name=\"g_load_i\"><Double/></Member><Member name=\"g_load_d\"><Double/></Member><Member name=\"g_load_command\">"
"<Double/></Member><Member name=\"elevator_control\"><Double/></Member><Member name=\"roll_rate_norm\">"
"<Double/></Member><Member name=\"roll_trim_error\"><Double/></Member><Member name=\"roll_rate_p\"><Double/>"
"</Member><Member name=\"roll_rate_i\"><Double/></Member><Member name=\"roll_rate_d\"><Double/></Member>"
"<Member name=\"roll_rate_command\"><Double/></Member><Member name=\"left_aileron_control\"><Double/></Member>"
"<Member name=\"right_aileron_control\"><Double/></Member><Member name=\"yaw_rate_norm\"><Double/></Member>"
"<Member name=\"yaw_trim_error\"><Double/></Member><Member name=\"yaw_rate_p\"><Double/></Member><Member name=\"yaw_rate_i\">"
"<Double/></Member><Member name=\"yaw_rate_d\"><Double/></Member><Member name=\"yaw_command\"><Double/>"
"</Member><Member name=\"rudder_control\"><Double/></Member><Member name=\"alpha_norm_gain\"><Double/>"
"</Member><Member name=\"lef_pos_deg\"><Double/></Member><Member name=\"lef_pos_norm\"><Double/></Member>"
"<Member name=\"throttle1\"><Double/></Member><Member name=\"flap_command\"><Double/></Member><Member name=\"flaps_control\">"
"<Double/></Member><Member name=\"flap_position_normalizer\"><Double/></Member><Member name=\"speedbrake_control\">"
"<Double/></Member><Member name=\"gear_control\"><Double/></Member><Member name=\"scheduled_steer_pos_deg\">"
"<Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::gearsTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"gears\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"gear_pos_norm\"><Double/></Member><Member name=\"gear_cmd_norm\"><Double/></Member>"
"<Member name=\"tailhook_pos_norm\"><Double/></Member><Member name=\"num_units\"><Double/></Member><Member name=\"slip_angle_deg\">"
"<Array size=\"3\"><Double/></Array></Member><Member name=\"WOW\"><Array size=\"3\"><Double/></Array></Member>"
"<Member name=\"wheel_speed_fps\"><Array size=\"3\"><Double/></Array></Member><Member name=\"z_position\">"
"<Array size=\"3\"><Double/></Array></Member><Member name=\"compression_ft\"><Array size=\"3\"><Double/>"
"</Array></Member><Member name=\"side_friction_coeff\"><Array size=\"3\"><Double/></Array></Member><Member name=\"pos_norm\">"
"<Array size=\"3\"><Double/></Array></Member></Struct></Module></MetaData>";
const char * ::JSBSim::inertiaTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"inertia\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"mass_slugs\"><Double/></Member><Member name=\"weight_lbs\"><Double/></Member>"
"<Member name=\"empty_weight_lbs\"><Double/></Member><Member name=\"cg_x_in\"><Double/></Member><Member name=\"cg_y_in\">"
"<Double/></Member><Member name=\"cg_z_in\"><Double/></Member><Member name=\"pointmass_weight_lbs\"><Double/>"
"</Member><Member name=\"pointmass_location_X_inches\"><Double/></Member><Member name=\"pointmass_location_Y_inches\">"
"<Double/></Member><Member name=\"pointmass_location_Z_inches\"><Double/></Member><Member name=\"bx_aero_lbs\">"
"<Double/></Member><Member name=\"by_aero_lbs\"><Double/></Member><Member name=\"bz_aero_lbs\"><Double/>"
"</Member><Member name=\"wx_aero_lbs\"><Double/></Member><Member name=\"wy_aero_lbs\"><Double/></Member>"
"<Member name=\"wz_aero_lbs\"><Double/></Member><Member name=\"od_norm\"><Double/></Member><Member name=\"bx_gear_lbs\">"
"<Double/></Member><Member name=\"by_gear_lbs\"><Double/></Member><Member name=\"bz_gear_lbs\"><Double/>"
"</Member><Member name=\"bx_total_lbs\"><Double/></Member><Member name=\"by_total_lbs\"><Double/></Member>"
"<Member name=\"bz_total_lbs\"><Double/></Member><Member name=\"oad_factor\"><Double/></Member><Member name=\"old_down\">"
"<Double/></Member><Member name=\"bx_prop_lbs\"><Double/></Member><Member name=\"by_prop_lbs\"><Double/>"
"</Member><Member name=\"bz_prop_lbs\"><Double/></Member><Member name=\"l_aero_lbsft\"><Double/></Member>"
"<Member name=\"m_aero_lbsft\"><Double/></Member><Member name=\"n_aero_lbsft\"><Double/></Member><Member name=\"l_gear_lbsft\">"
"<Double/></Member><Member name=\"m_gear_lbsft\"><Double/></Member><Member name=\"n_gear_lbsft\"><Double/>"
"</Member><Member name=\"l_total_lbsft\"><Double/></Member><Member name=\"m_total_lbsft\"><Double/></Member>"
"<Member name=\"n_total_lbsft\"><Double/></Member><Member name=\"l_prop_lbsft\"><Double/></Member><Member name=\"m_prop_lbsft\">"
"<Double/></Member><Member name=\"n_prop_lbsft\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::aeroTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"aero\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"cl_squared\"><Double/></Member><Member name=\"qbar_area\"><Double/></Member><Member name=\"alpha_max_rad\">"
"<Double/></Member><Member name=\"alpha_min_rad\"><Double/></Member><Member name=\"bi2vel\"><Double/></Member>"
"<Member name=\"ci2vel\"><Double/></Member><Member name=\"alpha_wing_rad\"><Double/></Member><Member name=\"stall_hyst_norm\">"
"<Double/></Member><Member name=\"alpha_rad\"><Double/></Member><Member name=\"beta_rad\"><Double/></Member>"
"<Member name=\"mag_beta_rad\"><Double/></Member><Member name=\"alpha_deg\"><Double/></Member><Member name=\"beta_deg\">"
"<Double/></Member><Member name=\"mag_beta_deg\"><Double/></Member><Member name=\"Re\"><Double/></Member>"
"<Member name=\"qbar_psf\"><Double/></Member><Member name=\"qbarUW_psf\"><Double/></Member><Member name=\"qbarUV_psf\">"
"<Double/></Member><Member name=\"alphadot_rad_sec\"><Double/></Member><Member name=\"betadot_rad_sec\">"
"<Double/></Member><Member name=\"alphadot_deg_sec\"><Double/></Member><Member name=\"betadot_deg_sec\">"
"<Double/></Member><Member name=\"h_b_cg_ft\"><Double/></Member><Member name=\"h_b_mac_ft\"><Double/></Member>"
"<Member name=\"kCLge\"><Double/></Member><Member name=\"stall_warn_norm\"><Double/></Member></Struct>"
"</Module></MetaData>";
const char * ::JSBSim::aerocoefficientTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"aerocoefficient\"><Member name=\"ID\">"
"<Long/></Member><Member name=\"CDDh\"><Double/></Member><Member name=\"CDmach\"><Double/></Member><Member name=\"CDDlef\">"
"<Double/></Member><Member name=\"CDDflaps\"><Double/></Member><Member name=\"CDgear\"><Double/></Member>"
"<Member name=\"CDDsb\"><Double/></Member><Member name=\"CDq\"><Double/></Member><Member name=\"CDq_Dlef\">"
"<Double/></Member><Member name=\"CYb\"><Double/></Member><Member name=\"CYb_M\"><Double/></Member><Member name=\"CYDa\">"
"<Double/></Member><Member name=\"CYdr\"><Double/></Member><Member name=\"CYp\"><Double/></Member><Member name=\"CYr\">"
"<Double/></Member><Member name=\"CLDh\"><Double/></Member><Member name=\"CLDlef\"><Double/></Member><Member name=\"CLDflaps\">"
"<Double/></Member><Member name=\"CLDsb\"><Double/></Member><Member name=\"CLq\"><Double/></Member><Member name=\"CLq_Dsb\">"
"<Double/></Member><Member name=\"Clb\"><Double/></Member><Member name=\"Clb_M\"><Double/></Member><Member name=\"Clp\">"
"<Double/></Member><Member name=\"Clr\"><Double/></Member><Member name=\"Clda\"><Double/></Member><Member name=\"Clda_M\">"
"<Double/></Member><Member name=\"Cldr_M\"><Double/></Member><Member name=\"Cldr\"><Double/></Member><Member name=\"CmDh\">"
"<Double/></Member><Member name=\"Cma_M\"><Double/></Member><Member name=\"Cmq\"><Double/></Member><Member name=\"Cnb\">"
"<Double/></Member><Member name=\"Cnb_M\"><Double/></Member><Member name=\"Cnp\"><Double/></Member><Member name=\"Cnr\">"
"<Double/></Member><Member name=\"Cnda_M\"><Double/></Member><Member name=\"Cnda\"><Double/></Member><Member name=\"Cndr\">"
"<Double/></Member><Member name=\"Cndr_M\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::geometricTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"geometric\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"Sw_sqft\"><Double/></Member><Member name=\"bw_ft\"><Double/></Member><Member name=\"cbarw_ft\">"
"<Double/></Member><Member name=\"iw_rad\"><Double/></Member><Member name=\"iw_deg\"><Double/></Member>"
"<Member name=\"Sh_sqft\"><Double/></Member><Member name=\"lh_ft\"><Double/></Member><Member name=\"Sv_sqft\">"
"<Double/></Member><Member name=\"lv_ft\"><Double/></Member><Member name=\"lh_norm\"><Double/></Member>"
"<Member name=\"lv_norm\"><Double/></Member><Member name=\"vbarh_norm\"><Double/></Member><Member name=\"vbarv_norm\">"
"<Double/></Member><Member name=\"aero_rp_x_in\"><Double/></Member><Member name=\"aero_rp_y_in\"><Double/>"
"</Member><Member name=\"aero_rp_z_in\"><Double/></Member><Member name=\"eyepoint_x_in\"><Double/></Member>"
"<Member name=\"eyepoint_y_in\"><Double/></Member><Member name=\"eyepoint_z_in\"><Double/></Member><Member name=\"visualrefpoint_x_in\">"
"<Double/></Member><Member name=\"visualrefpoint_y_in\"><Double/></Member><Member name=\"visualrefpoint_z_in\">"
"<Double/></Member><Member name=\"terrain_radius\"><Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::propulsionTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"propulsion\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"tat_r\"><Double/></Member><Member name=\"tat_c\"><Double/></Member><Member name=\"pt_lbs_sqft\">"
"<Double/></Member><Member name=\"set_running\"><Double/></Member><Member name=\"starter_cmd\"><Double/>"
"</Member><Member name=\"cutoff_cmd\"><Double/></Member><Member name=\"active_engine\"><Double/></Member>"
"<Member name=\"total_fuel_lbs\"><Double/></Member><Member name=\"refuel\"><Double/></Member><Member name=\"fuel_dump\">"
"<Double/></Member><Member name=\"pitch_angle_rad\"><Double/></Member><Member name=\"yaw_angle_rad\"><Double/>"
"</Member><Member name=\"reverser_angle_rad\"><Double/></Member><Member name=\"thrust_lbs\"><Double/></Member>"
"<Member name=\"fuel_flow_rate_pps\"><Double/></Member><Member name=\"IdleThrust\"><Double/></Member><Member name=\"MilThrust\">"
"<Double/></Member><Member name=\"AugThrust\"><Double/></Member><Member name=\"WindMilRPM\"><Double/></Member>"
"<Member name=\"n1\"><Double/></Member><Member name=\"n2\"><Double/></Member><Member name=\"injection_cmd\">"
"<Double/></Member><Member name=\"phase\"><Double/></Member><Member name=\"RPM\"><Double/></Member><Member name=\"EmergencyThrottlePosition\">"
"<Double/></Member><Member name=\"EmergencyNozzleSwitch\"><Double/></Member><Member name=\"FuelDipperSwitch\">"
"<Double/></Member><Member name=\"AugmentationSwitch\"><Double/></Member><Member name=\"EGT_degC\"><Double/>"
"</Member><Member name=\"RelightSwitch\"><Double/></Member><Member name=\"AugmentationLight\"><Double/>"
"</Member><Member name=\"tank_contents_lbs\"><Array size=\"3\"><Double/></Array></Member></Struct></Module>"
"</MetaData>";
const char * ::JSBSim::initialConditionsTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"initialConditions\"><Member name=\"ID\">"
"<Long/></Member><Member name=\"vc_kts\"><Double/></Member><Member name=\"ve_kts\"><Double/></Member><Member name=\"vg_kts\">"
"<Double/></Member><Member name=\"vt_kts\"><Double/></Member><Member name=\"mach\"><Double/></Member><Member name=\"roc_fpm\">"
"<Double/></Member><Member name=\"gamma_deg\"><Double/></Member><Member name=\"alpha_deg\"><Double/></Member>"
"<Member name=\"beta_deg\"><Double/></Member><Member name=\"theta_deg\"><Double/></Member><Member name=\"phi_deg\">"
"<Double/></Member><Member name=\"psi_true_deg\"><Double/></Member><Member name=\"lat_gc_deg\"><Double/>"
"</Member><Member name=\"long_gc_deg\"><Double/></Member><Member name=\"h_sl_ft\"><Double/></Member><Member name=\"h_agl_ft\">"
"<Double/></Member><Member name=\"sea_level_radius_ft\"><Double/></Member><Member name=\"terrain_elevation_ft\">"
"<Double/></Member><Member name=\"vg_fps\"><Double/></Member><Member name=\"vt_fps\"><Double/></Member>"
"<Member name=\"vw_bx_fps\"><Double/></Member><Member name=\"vw_by_fps\"><Double/></Member><Member name=\"vw_bz_fps\">"
"<Double/></Member><Member name=\"vw_north_fps\"><Double/></Member><Member name=\"vw_east_fps\"><Double/>"
"</Member><Member name=\"vw_down_fps\"><Double/></Member><Member name=\"vw_mag_fps\"><Double/></Member>"
"<Member name=\"vw_dir_deg\"><Double/></Member><Member name=\"roc_fps\"><Double/></Member><Member name=\"u_fps\">"
"<Double/></Member><Member name=\"v_fps\"><Double/></Member><Member name=\"w_fps\"><Double/></Member><Member name=\"vn_fps\">"
"<Double/></Member><Member name=\"ve_fps\"><Double/></Member><Member name=\"vd_fps\"><Double/></Member>"
"<Member name=\"gamma_rad\"><Double/></Member><Member name=\"alpha_rad\"><Double/></Member><Member name=\"theta_rad\">"
"<Double/></Member><Member name=\"beta_rad\"><Double/></Member><Member name=\"phi_rad\"><Double/></Member>"
"<Member name=\"psi_true_rad\"><Double/></Member><Member name=\"lat_gc_rad\"><Double/></Member><Member name=\"long_gc_rad\">"
"<Double/></Member><Member name=\"p_rad_sec\"><Double/></Member><Member name=\"q_rad_sec\"><Double/></Member>"
"<Member name=\"r_rad_sec\"><Double/></Member><Member name=\"CDdHT\"><Double/></Member></Struct></Module>"
"</MetaData>";
const char * ::JSBSim::subSystemsTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"subSystems\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"electrical_GPU\"><Boolean/></Member><Member name=\"electrical_BatteryBus\"><Boolean/>"
"</Member><Member name=\"electrical_BatterySwitch\"><Boolean/></Member><Member name=\"electrical_ManualLoadShed\">"
"<Boolean/></Member><Member name=\"electrical_GeneratorSwitch\"><Boolean/></Member><Member name=\"electrical_InverterSwitch\">"
"<Boolean/></Member><Member name=\"electrical_AlternatorSwitch\"><Boolean/></Member><Member name=\"electrical_MainFailLightSwitch\">"
"<Double/></Member><Member name=\"electrical_EmergencyParkingBrakeSwitch\"><Boolean/></Member><Member name=\"hydraulic_HydraulicPumpPressure\">"
"<Double/></Member><Member name=\"hydraulic_ServoAccumulator\"><Boolean/></Member><Member name=\"hydraulic_EmergencyHydPumpSwitch\">"
"<Boolean/></Member><Member name=\"hydraulic_EmergencyPump\"><Boolean/></Member><Member name=\"hydraulic_Hydraulic2PumpPressure\">"
"<Double/></Member><Member name=\"hydraulic_PreservoHyd2\"><Boolean/></Member><Member name=\"hydraulic_HydraulicResservoir\">"
"<Double/></Member><Member name=\"armament_MasterArmamentSwitch\"><Boolean/></Member><Member name=\"armament_NormalManual\">"
"<Boolean/></Member><Member name=\"armament_BombsSelection\"><Boolean/></Member><Member name=\"armament_GunsSelection\">"
"<Boolean/></Member><Member name=\"armament_MissilesSelection\"><Boolean/></Member><Member name=\"armament_RocketsSelection\">"
"<Boolean/></Member><Member name=\"armament_GunTrigger\"><Boolean/></Member><Member name=\"armament_BRMTrigger\">"
"<Boolean/></Member><Member name=\"armament_FuelDipper\"><Boolean/></Member><Member name=\"fuel_WingTankDropSwitch\">"
"<Boolean/></Member><Member name=\"fuel_FuseLageTankDropSwitch\"><Boolean/></Member><Member name=\"fuel_ExTankDropSwitch\">"
"<Boolean/></Member><Member name=\"fuel_FuelDumpSwitch\"><Boolean/></Member><Member name=\"fuel_MainLPPump\">"
"<Boolean/></Member><Member name=\"fuel_LPPumpRight\"><Boolean/></Member><Member name=\"fuel_LPPumpLeft\">"
"<Boolean/></Member><Member name=\"fuel_CrossfeedCock\"><Boolean/></Member><Member name=\"fuel_GaugeTest\">"
"<Boolean/></Member><Member name=\"fuel_RPM\"><Double/></Member><Member name=\"fuel_FuelConsumptionRate\">"
"<Double/></Member></Struct></Module></MetaData>";
const char * ::JSBSim::subSystemOutTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"subSystemOut\"><Member name=\"ID\">"
"<Long/></Member><Member name=\"output_BatteryBusOut\"><Boolean/></Member><Member name=\"output_DC\"><Boolean/>"
"</Member><Member name=\"output_Inverter\"><Boolean/></Member><Member name=\"output_ALternator\"><Boolean/>"
"</Member><Member name=\"output_AutoLoadSheddingAC\"><Boolean/></Member><Member name=\"output_AlternatorWarningLight\">"
"<Boolean/></Member><Member name=\"output_GenernatorWarningLight\"><Boolean/></Member><Member name=\"output_BatteryWarningLight\">"
"<Boolean/></Member><Member name=\"output_UnderCarriageExtension\"><Double/></Member><Member name=\"output_WheelBrake\">"
"<Double/></Member><Member name=\"output_SpeedBrake\"><Double/></Member><Member name=\"output_ParkingBrake\">"
"<Double/></Member><Member name=\"output_OscarDashpot\"><Double/></Member><Member name=\"output_LeftElevonControl\">"
"<Double/></Member><Member name=\"output_RightElevonControl\"><Double/></Member><Member name=\"output_PreservoControl\">"
"<Double/></Member><Member name=\"output_PitchDamper\"><Double/></Member><Member name=\"output_HydraulicIndicatorLight\">"
"<Boolean/></Member><Member name=\"output_Hydraulic2IndicatorLight\"><Boolean/></Member><Member name=\"output_EmergencyHydraulicIndicator\">"
"<Boolean/></Member><Member name=\"output_DualHydGuage1\"><Double/></Member><Member name=\"output_DualHydGuage2\">"
"<Double/></Member><Member name=\"output_FuelTotalizer\"><Double/></Member><Member name=\"output_LeftWingTankWarningLight\">"
"<Boolean/></Member><Member name=\"output_CenterLineTankWarningLight\"><Boolean/></Member><Member name=\"output_InternalWingTankWarningLight\">"
"<Boolean/></Member><Member name=\"output_UpperBayWarningLight\"><Boolean/></Member><Member name=\"output_RightWingTankWarningLight\">"
"<Boolean/></Member><Member name=\"output_LitreWarningLight600\"><Boolean/></Member><Member name=\"output_LitreWarningLight400\">"
"<Boolean/></Member><Member name=\"output_DFGLeft\"><Double/></Member><Member name=\"output_DFGRight\">"
"<Double/></Member><Member name=\"output_MainFailLight\"><Double/></Member><Member name=\"output_WarningHorn\">"
"<Double/></Member><Member name=\"output_BombIndication\"><Boolean/></Member><Member name=\"output_GunIndication\">"
"<Boolean/></Member><Member name=\"output_MissileIndication\"><Boolean/></Member><Member name=\"output_RocketIndication\">"
"<Boolean/></Member><Member name=\"output_RPMIncrease\"><Double/></Member></Struct></Module></MetaData>";
