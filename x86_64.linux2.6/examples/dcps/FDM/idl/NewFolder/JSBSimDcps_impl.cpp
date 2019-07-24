#include "JSBSimDcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "JSBSimSplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__JSBSim_fdmdata__copyIn(
    c_base base,
    struct JSBSim::fdmdata *from,
    struct _JSBSim_fdmdata *to);

extern void
__JSBSim_fdmdata__copyOut(
    void *_from,
    void *_to);

// DDS JSBSim::fdmdata TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
JSBSim::fdmdataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new JSBSim::fdmdataDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
JSBSim::fdmdataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new JSBSim::fdmdataDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
JSBSim::fdmdataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new JSBSim::fdmdataDataReaderView_impl (handle);
}

// DDS JSBSim::fdmdata TypeSupport Object Body

 JSBSim::fdmdataTypeSupport::fdmdataTypeSupport(void) :
    TypeSupport_impl(
        __JSBSim_fdmdata__name(),
        __JSBSim_fdmdata__keys(),
        JSBSim::fdmdataTypeSupport::metaDescriptor,
        (gapi_copyIn) __JSBSim_fdmdata__copyIn,
        (gapi_copyOut) __JSBSim_fdmdata__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<JSBSim::fdmdataSeq, JSBSim::fdmdata>,
        new  JSBSim::fdmdataTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 JSBSim::fdmdataTypeSupport::~fdmdataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
JSBSim::fdmdataTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
JSBSim::fdmdataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS JSBSim::fdmdata DataWriter_impl Object Body

 JSBSim::fdmdataDataWriter_impl::fdmdataDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::fdmdataDataWriter_impl::~fdmdataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
JSBSim::fdmdataDataWriter_impl::register_instance(
    const JSBSim::fdmdata & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
JSBSim::fdmdataDataWriter_impl::register_instance_w_timestamp(
    const fdmdata & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::unregister_instance(
    const JSBSim::fdmdata & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::fdmdataDataWriter_impl::unregister_instance_w_timestamp(
    const fdmdata & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::write(
    const JSBSim::fdmdata & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::write_w_timestamp(
    const fdmdata & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::dispose(
    const JSBSim::fdmdata & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
JSBSim::fdmdataDataWriter_impl::dispose_w_timestamp(
    const fdmdata & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::writedispose(
    const JSBSim::fdmdata & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataWriter_impl::writedispose_w_timestamp(
    const fdmdata & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
JSBSim::fdmdataDataWriter_impl::get_key_value(
    fdmdata & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::fdmdataDataWriter_impl::lookup_instance(
	const JSBSim::fdmdata & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS JSBSim::fdmdata DataReader_impl Object Body

 JSBSim::fdmdataDataReader_impl::fdmdataDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::fdmdataDataReader_impl::~fdmdataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::fdmdataDataReader_impl::read(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::take(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::read_w_condition(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::take_w_condition(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::read_next_sample(
    JSBSim::fdmdata & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::fdmdataDataReader_impl::take_next_sample(
    JSBSim::fdmdata & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::fdmdataDataReader_impl::read_instance(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::take_instance(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::read_next_instance(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::take_next_instance(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::read_next_instance_w_condition(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::take_next_instance_w_condition(
    JSBSim::fdmdataSeq & received_data,
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
JSBSim::fdmdataDataReader_impl::return_loan(
    JSBSim::fdmdataSeq & received_data,
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
                        JSBSim::fdmdataSeq::freebuf( received_data.get_buffer(false) );
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
JSBSim::fdmdataDataReader_impl::get_key_value(
    JSBSim::fdmdata & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::fdmdataDataReader_impl::lookup_instance(
    const JSBSim::fdmdata & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
JSBSim::fdmdataDataReader_impl::check_preconditions(
    JSBSim::fdmdataSeq & received_data,
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


// DDS JSBSim::fdmdata DataReaderView_impl Object Body

 JSBSim::fdmdataDataReaderView_impl::fdmdataDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 JSBSim::fdmdataDataReaderView_impl::~fdmdataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::read(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::take(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::read_w_condition(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::take_w_condition(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::fdmdataDataReaderView_impl::read_next_sample(
    JSBSim::fdmdata & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
JSBSim::fdmdataDataReaderView_impl::take_next_sample(
    JSBSim::fdmdata & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::read_instance(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::take_instance(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::read_next_instance(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::take_next_instance(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::fdmdataDataReaderView_impl::read_next_instance_w_condition(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
JSBSim::fdmdataDataReaderView_impl::take_next_instance_w_condition(
    JSBSim::fdmdataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = JSBSim::fdmdataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
JSBSim::fdmdataDataReaderView_impl::return_loan(
    JSBSim::fdmdataSeq & received_data,
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
                        JSBSim::fdmdataSeq::freebuf( received_data.get_buffer(false) );
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
JSBSim::fdmdataDataReaderView_impl::get_key_value(
    JSBSim::fdmdata & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
JSBSim::fdmdataDataReaderView_impl::lookup_instance(
    const JSBSim::fdmdata & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::JSBSim::fdmdataTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"JSBSim\"><Struct name=\"fdmdata\"><Member name=\"ID\"><Long/>"
"</Member><Member name=\"epa_rad\"><Double/></Member><Member name=\"h_sl_ft\"><Double/></Member><Member name=\"h_sl_meters\">"
"<Double/></Member><Member name=\"lat_gc_rad\"><Double/></Member><Member name=\"long_gc_rad\"><Double/>"
"</Member><Member name=\"lat_gc_deg\"><Double/></Member><Member name=\"long_gc_deg\"><Double/></Member>"
"<Member name=\"lat_geod_rad\"><Double/></Member><Member name=\"lat_geod_deg\"><Double/></Member><Member name=\"geod_alt_ft\">"
"<Double/></Member><Member name=\"h_agl_ft\"><Double/></Member><Member name=\"radius_to_vehicle_ft\"><Double/>"
"</Member><Member name=\"terrain_elevation_asl_ft\"><Double/></Member><Member name=\"distance_from_start_lon_mt\">"
"<Double/></Member><Member name=\"distance_from_start_lat_mt\"><Double/></Member><Member name=\"distance_from_start_mag_mt\">"
"<Double/></Member><Member name=\"pdot_rad_sec2\"><Double/></Member><Member name=\"qdot_rad_sec2\"><Double/>"
"</Member><Member name=\"rdot_rad_sec2\"><Double/></Member><Member name=\"udot_ft_sec2\"><Double/></Member>"
"<Member name=\"vdot_ft_sec2\"><Double/></Member><Member name=\"wdot_ft_sec2\"><Double/></Member><Member name=\"a_pilot_x_ft_sec2\">"
"<Double/></Member><Member name=\"a_pilot_y_ft_sec2\"><Double/></Member><Member name=\"a_pilot_z_ft_sec2\">"
"<Double/></Member><Member name=\"n_pilot_x_norm\"><Double/></Member><Member name=\"n_pilot_y_norm\"><Double/>"
"</Member><Member name=\"n_pilot_z_norm\"><Double/></Member><Member name=\"Nz\"><Double/></Member><Member name=\"phi_rad\">"
"<Double/></Member><Member name=\"theta_rad\"><Double/></Member><Member name=\"psi_rad\"><Double/></Member>"
"<Member name=\"roll_rad\"><Double/></Member><Member name=\"pitch_rad\"><Double/></Member><Member name=\"heading_true_rad\">"
"<Double/></Member><Member name=\"integrator_rate_rotational\"><Double/></Member><Member name=\"integrator_rate_translational\">"
"<Double/></Member><Member name=\"integrator_position_rotational\"><Double/></Member><Member name=\"integrator_position_translational\">"
"<Double/></Member><Member name=\"write_state_file\"><Double/></Member><Member name=\"do_simple_trim\">"
"<Double/></Member><Member name=\"reset\"><Double/></Member><Member name=\"terminate\"><Double/></Member>"
"<Member name=\"frame_start_time\"><Double/></Member><Member name=\"cycle_duration\"><Double/></Member>"
"<Member name=\"flight_path_gamma_rad\"><Double/></Member><Member name=\"flight_path_psi_gt_rad\"><Double/>"
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
"<Double/></Member><Member name=\"vg_fps\"><Double/></Member><Member name=\"T_R\"><Double/></Member><Member name=\"rho_slugs_ft3\">"
"<Double/></Member><Member name=\"P_psf\"><Double/></Member><Member name=\"a_fps\"><Double/></Member><Member name=\"T_sl_R\">"
"<Double/></Member><Member name=\"rho_sl_slugs_ft3\"><Double/></Member><Member name=\"P_sl_psf\"><Double/>"
"</Member><Member name=\"a_sl_fps\"><Double/></Member><Member name=\"theta\"><Double/></Member><Member name=\"sigma\">"
"<Double/></Member><Member name=\"delta\"><Double/></Member><Member name=\"a_ratio\"><Double/></Member>"
"<Member name=\"psiw_rad\"><Double/></Member><Member name=\"delta_T\"><Double/></Member><Member name=\"T_sl_dev_F\">"
"<Double/></Member><Member name=\"density_altitude\"><Double/></Member><Member name=\"wind_north_fps\">"
"<Double/></Member><Member name=\"wind_east_fps\"><Double/></Member><Member name=\"wind_down_fps\"><Double/>"
"</Member><Member name=\"wind_mag_fps\"><Double/></Member><Member name=\"total_wind_north_fps\"><Double/>"
"</Member><Member name=\"total_wind_east_fps\"><Double/></Member><Member name=\"total_wind_down_fps\">"
"<Double/></Member><Member name=\"gust_north_fps\"><Double/></Member><Member name=\"gust_east_fps\"><Double/>"
"</Member><Member name=\"gust_down_fps\"><Double/></Member><Member name=\"p_turb_rad_sec\"><Double/></Member>"
"<Member name=\"q_turb_rad_sec\"><Double/></Member><Member name=\"r_turb_rad_sec\"><Double/></Member><Member name=\"turb_rate\">"
"<Double/></Member><Member name=\"turb_gain\"><Double/></Member><Member name=\"turb_rhythmicity\"><Double/>"
"</Member><Member name=\"aileron_cmd_norm\"><Double/></Member><Member name=\"elevator_cmd_norm\"><Double/>"
"</Member><Member name=\"rudder_cmd_norm\"><Double/></Member><Member name=\"flap_cmd_norm\"><Double/></Member>"
"<Member name=\"speedbrake_cmd_norm\"><Double/></Member><Member name=\"spoiler_cmd_norm\"><Double/></Member>"
"<Member name=\"pitch_trim_cmd_norm\"><Double/></Member><Member name=\"roll_trim_cmd_norm\"><Double/></Member>"
"<Member name=\"yaw_trim_cmd_norm\"><Double/></Member><Member name=\"left_aileron_pos_rad\"><Double/></Member>"
"<Member name=\"left_aileron_pos_deg\"><Double/></Member><Member name=\"left_aileron_pos_norm\"><Double/>"
"</Member><Member name=\"mag_left_aileron_pos_rad\"><Double/></Member><Member name=\"right_aileron_pos_rad\">"
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
"<Double/></Member><Member name=\"gear_pos_norm\"><Double/></Member><Member name=\"gear_cmd_norm\"><Double/>"
"</Member><Member name=\"tailhook_pos_norm\"><Double/></Member><Member name=\"num_units\"><Double/></Member>"
"<Member name=\"slip_angle_deg\"><Array size=\"3\"><Double/></Array></Member><Member name=\"WOW\"><Array size=\"3\">"
"<Double/></Array></Member><Member name=\"wheel_speed_fps\"><Array size=\"3\"><Double/></Array></Member>"
"<Member name=\"z_position\"><Array size=\"3\"><Double/></Array></Member><Member name=\"compression_ft\">"
"<Array size=\"3\"><Double/></Array></Member><Member name=\"side_friction_coeff\"><Array size=\"3\"><Double/>"
"</Array></Member><Member name=\"pos_norm\"><Array size=\"3\"><Double/></Array></Member><Member name=\"mass_slugs\">"
"<Double/></Member><Member name=\"weight_lbs\"><Double/></Member><Member name=\"empty_weight_lbs\"><Double/>"
"</Member><Member name=\"cg_x_in\"><Double/></Member><Member name=\"cg_y_in\"><Double/></Member><Member name=\"cg_z_in\">"
"<Double/></Member><Member name=\"pointmass_weight_lbs\"><Double/></Member><Member name=\"pointmass_location_X_inches\">"
"<Double/></Member><Member name=\"pointmass_location_Y_inches\"><Double/></Member><Member name=\"pointmass_location_Z_inches\">"
"<Double/></Member><Member name=\"bx_aero_lbs\"><Double/></Member><Member name=\"by_aero_lbs\"><Double/>"
"</Member><Member name=\"bz_aero_lbs\"><Double/></Member><Member name=\"wx_aero_lbs\"><Double/></Member>"
"<Member name=\"wy_aero_lbs\"><Double/></Member><Member name=\"wz_aero_lbs\"><Double/></Member><Member name=\"od_norm\">"
"<Double/></Member><Member name=\"bx_gear_lbs\"><Double/></Member><Member name=\"by_gear_lbs\"><Double/>"
"</Member><Member name=\"bz_gear_lbs\"><Double/></Member><Member name=\"bx_total_lbs\"><Double/></Member>"
"<Member name=\"by_total_lbs\"><Double/></Member><Member name=\"bz_total_lbs\"><Double/></Member><Member name=\"oad_factor\">"
"<Double/></Member><Member name=\"old_down\"><Double/></Member><Member name=\"bx_prop_lbs\"><Double/></Member>"
"<Member name=\"by_prop_lbs\"><Double/></Member><Member name=\"bz_prop_lbs\"><Double/></Member><Member name=\"l_aero_lbsft\">"
"<Double/></Member><Member name=\"m_aero_lbsft\"><Double/></Member><Member name=\"n_aero_lbsft\"><Double/>"
"</Member><Member name=\"l_gear_lbsft\"><Double/></Member><Member name=\"m_gear_lbsft\"><Double/></Member>"
"<Member name=\"n_gear_lbsft\"><Double/></Member><Member name=\"l_total_lbsft\"><Double/></Member><Member name=\"m_total_lbsft\">"
"<Double/></Member><Member name=\"n_total_lbsft\"><Double/></Member><Member name=\"l_prop_lbsft\"><Double/>"
"</Member><Member name=\"m_prop_lbsft\"><Double/></Member><Member name=\"n_prop_lbsft\"><Double/></Member>"
"<Member name=\"cl_squared\"><Double/></Member><Member name=\"qbar_area\"><Double/></Member><Member name=\"alpha_max_rad\">"
"<Double/></Member><Member name=\"alpha_min_rad\"><Double/></Member><Member name=\"bi2vel\"><Double/></Member>"
"<Member name=\"ci2vel\"><Double/></Member><Member name=\"alpha_wing_rad\"><Double/></Member><Member name=\"stall_hyst_norm\">"
"<Double/></Member><Member name=\"alpha_rad\"><Double/></Member><Member name=\"beta_rad\"><Double/></Member>"
"<Member name=\"mag_beta_rad\"><Double/></Member><Member name=\"alpha_deg\"><Double/></Member><Member name=\"beta_deg\">"
"<Double/></Member><Member name=\"mag_beta_deg\"><Double/></Member><Member name=\"Re\"><Double/></Member>"
"<Member name=\"qbar_psf\"><Double/></Member><Member name=\"qbarUW_psf\"><Double/></Member><Member name=\"qbarUV_psf\">"
"<Double/></Member><Member name=\"alphadot_rad_sec\"><Double/></Member><Member name=\"betadot_rad_sec\">"
"<Double/></Member><Member name=\"alphadot_deg_sec\"><Double/></Member><Member name=\"betadot_deg_sec\">"
"<Double/></Member><Member name=\"h_b_cg_ft\"><Double/></Member><Member name=\"h_b_mac_ft\"><Double/></Member>"
"<Member name=\"kCLge\"><Double/></Member><Member name=\"stall_warn_norm\"><Double/></Member><Member name=\"Sw_sqft\">"
"<Double/></Member><Member name=\"bw_ft\"><Double/></Member><Member name=\"cbarw_ft\"><Double/></Member>"
"<Member name=\"iw_rad\"><Double/></Member><Member name=\"iw_deg\"><Double/></Member><Member name=\"Sh_sqft\">"
"<Double/></Member><Member name=\"lh_ft\"><Double/></Member><Member name=\"Sv_sqft\"><Double/></Member>"
"<Member name=\"lv_ft\"><Double/></Member><Member name=\"lh_norm\"><Double/></Member><Member name=\"lv_norm\">"
"<Double/></Member><Member name=\"vbarh_norm\"><Double/></Member><Member name=\"vbarv_norm\"><Double/>"
"</Member><Member name=\"aero_rp_x_in\"><Double/></Member><Member name=\"aero_rp_y_in\"><Double/></Member>"
"<Member name=\"aero_rp_z_in\"><Double/></Member><Member name=\"eyepoint_x_in\"><Double/></Member><Member name=\"eyepoint_y_in\">"
"<Double/></Member><Member name=\"eyepoint_z_in\"><Double/></Member><Member name=\"visualrefpoint_x_in\">"
"<Double/></Member><Member name=\"visualrefpoint_y_in\"><Double/></Member><Member name=\"visualrefpoint_z_in\">"
"<Double/></Member><Member name=\"terrain_radius\"><Double/></Member><Member name=\"tat_r\"><Double/></Member>"
"<Member name=\"tat_c\"><Double/></Member><Member name=\"pt_lbs_sqft\"><Double/></Member><Member name=\"set_running\">"
"<Double/></Member><Member name=\"starter_cmd\"><Double/></Member><Member name=\"cutoff_cmd\"><Double/>"
"</Member><Member name=\"active_engine\"><Double/></Member><Member name=\"total_fuel_lbs\"><Double/></Member>"
"<Member name=\"refuel\"><Double/></Member><Member name=\"fuel_dump\"><Double/></Member><Member name=\"pitch_angle_rad\">"
"<Double/></Member><Member name=\"yaw_angle_rad\"><Double/></Member><Member name=\"reverser_angle_rad\">"
"<Double/></Member><Member name=\"thrust_lbs\"><Double/></Member><Member name=\"fuel_flow_rate_pps\"><Double/>"
"</Member><Member name=\"IdleThrust\"><Double/></Member><Member name=\"MilThrust\"><Double/></Member><Member name=\"AugThrust\">"
"<Double/></Member><Member name=\"WindMilRPM\"><Double/></Member><Member name=\"n1\"><Double/></Member>"
"<Member name=\"n2\"><Double/></Member><Member name=\"injection_cmd\"><Double/></Member><Member name=\"phase\">"
"<Double/></Member><Member name=\"RPM\"><Double/></Member><Member name=\"EmergencyThrottlePosition\"><Double/>"
"</Member><Member name=\"EmergencyNozzleSwitch\"><Double/></Member><Member name=\"FuelDipperSwitch\"><Double/>"
"</Member><Member name=\"AugmentationSwitch\"><Double/></Member><Member name=\"EGT_degC\"><Double/></Member>"
"<Member name=\"RelightSwitch\"><Double/></Member><Member name=\"AugmentationLight\"><Double/></Member>"
"<Member name=\"tank_contents_lbs\"><Array size=\"3\"><Double/></Array></Member><Member name=\"roc_fpm\">"
"<Double/></Member><Member name=\"gamma_deg\"><Double/></Member><Member name=\"theta_deg\"><Double/></Member>"
"<Member name=\"phi_deg\"><Double/></Member><Member name=\"psi_true_deg\"><Double/></Member><Member name=\"sea_level_radius_ft\">"
"<Double/></Member><Member name=\"terrain_elevation_ft\"><Double/></Member><Member name=\"vw_bx_fps\">"
"<Double/></Member><Member name=\"vw_by_fps\"><Double/></Member><Member name=\"vw_bz_fps\"><Double/></Member>"
"<Member name=\"vw_north_fps\"><Double/></Member><Member name=\"vw_east_fps\"><Double/></Member><Member name=\"vw_down_fps\">"
"<Double/></Member><Member name=\"vw_mag_fps\"><Double/></Member><Member name=\"vw_dir_deg\"><Double/>"
"</Member><Member name=\"roc_fps\"><Double/></Member><Member name=\"vn_fps\"><Double/></Member><Member name=\"vd_fps\">"
"<Double/></Member><Member name=\"gamma_rad\"><Double/></Member><Member name=\"psi_true_rad\"><Double/>"
"</Member><Member name=\"CDdHT\"><Double/></Member><Member name=\"electrical_GPU\"><Boolean/></Member>"
"<Member name=\"electrical_BatteryBus\"><Boolean/></Member><Member name=\"electrical_BatterySwitch\"><Boolean/>"
"</Member><Member name=\"electrical_ManualLoadShed\"><Boolean/></Member><Member name=\"electrical_GeneratorSwitch\">"
"<Boolean/></Member><Member name=\"electrical_InverterSwitch\"><Boolean/></Member><Member name=\"electrical_AlternatorSwitch\">"
"<Boolean/></Member><Member name=\"electrical_MainFailLightSwitch\"><Double/></Member><Member name=\"electrical_EmergencyParkingBrakeSwitch\">"
"<Boolean/></Member><Member name=\"hydraulic_HydraulicPumpPressure\"><Double/></Member><Member name=\"hydraulic_ServoAccumulator\">"
"<Boolean/></Member><Member name=\"hydraulic_EmergencyHydPumpSwitch\"><Boolean/></Member><Member name=\"hydraulic_EmergencyPump\">"
"<Boolean/></Member><Member name=\"hydraulic_Hydraulic2PumpPressure\"><Double/></Member><Member name=\"hydraulic_PreservoHyd2\">"
"<Boolean/></Member><Member name=\"hydraulic_HydraulicResservoir\"><Double/></Member><Member name=\"armament_MasterArmamentSwitch\">"
"<Boolean/></Member><Member name=\"armament_NormalManual\"><Boolean/></Member><Member name=\"armament_BombsSelection\">"
"<Boolean/></Member><Member name=\"armament_GunsSelection\"><Boolean/></Member><Member name=\"armament_MissilesSelection\">"
"<Boolean/></Member><Member name=\"armament_RocketsSelection\"><Boolean/></Member><Member name=\"armament_GunTrigger\">"
"<Boolean/></Member><Member name=\"armament_BRMTrigger\"><Boolean/></Member><Member name=\"armament_FuelDipper\">"
"<Boolean/></Member><Member name=\"fuel_WingTankDropSwitch\"><Boolean/></Member><Member name=\"fuel_FuseLageTankDropSwitch\">"
"<Boolean/></Member><Member name=\"fuel_ExTankDropSwitch\"><Boolean/></Member><Member name=\"fuel_FuelDumpSwitch\">"
"<Boolean/></Member><Member name=\"fuel_MainLPPump\"><Boolean/></Member><Member name=\"fuel_LPPumpRight\">"
"<Boolean/></Member><Member name=\"fuel_LPPumpLeft\"><Boolean/></Member><Member name=\"fuel_CrossfeedCock\">"
"<Boolean/></Member><Member name=\"fuel_GaugeTest\"><Boolean/></Member><Member name=\"fuel_RPM\"><Double/>"
"</Member><Member name=\"fuel_FuelConsumptionRate\"><Double/></Member><Member name=\"output_BatteryBusOut\">"
"<Boolean/></Member><Member name=\"output_DC\"><Boolean/></Member><Member name=\"output_Inverter\"><Boolean/>"
"</Member><Member name=\"output_ALternator\"><Boolean/></Member><Member name=\"output_AutoLoadSheddingAC\">"
"<Boolean/></Member><Member name=\"output_AlternatorWarningLight\"><Boolean/></Member><Member name=\"output_GenernatorWarningLight\">"
"<Boolean/></Member><Member name=\"output_BatteryWarningLight\"><Boolean/></Member><Member name=\"output_UnderCarriageExtension\">"
"<Double/></Member><Member name=\"output_WheelBrake\"><Double/></Member><Member name=\"output_SpeedBrake\">"
"<Double/></Member><Member name=\"output_ParkingBrake\"><Double/></Member><Member name=\"output_OscarDashpot\">"
"<Double/></Member><Member name=\"output_LeftElevonControl\"><Double/></Member><Member name=\"output_RightElevonControl\">"
"<Double/></Member><Member name=\"output_PreservoControl\"><Double/></Member><Member name=\"output_PitchDamper\">"
"<Double/></Member><Member name=\"output_HydraulicIndicatorLight\"><Boolean/></Member><Member name=\"output_Hydraulic2IndicatorLight\">"
"<Boolean/></Member><Member name=\"output_EmergencyHydraulicIndicator\"><Boolean/></Member><Member name=\"output_DualHydGuage1\">"
"<Double/></Member><Member name=\"output_DualHydGuage2\"><Double/></Member><Member name=\"output_FuelTotalizer\">"
"<Double/></Member><Member name=\"output_LeftWingTankWarningLight\"><Boolean/></Member><Member name=\"output_CenterLineTankWarningLight\">"
"<Boolean/></Member><Member name=\"output_InternalWingTankWarningLight\"><Boolean/></Member><Member name=\"output_UpperBayWarningLight\">"
"<Boolean/></Member><Member name=\"output_RightWingTankWarningLight\"><Boolean/></Member><Member name=\"output_LitreWarningLight600\">"
"<Boolean/></Member><Member name=\"output_LitreWarningLight400\"><Boolean/></Member><Member name=\"output_DFGLeft\">"
"<Double/></Member><Member name=\"output_DFGRight\"><Double/></Member><Member name=\"output_MainFailLight\">"
"<Double/></Member><Member name=\"output_WarningHorn\"><Double/></Member><Member name=\"output_BombIndication\">"
"<Boolean/></Member><Member name=\"output_GunIndication\"><Boolean/></Member><Member name=\"output_MissileIndication\">"
"<Boolean/></Member><Member name=\"output_RocketIndication\"><Boolean/></Member><Member name=\"output_RPMIncrease\">"
"<Double/></Member><Member name=\"FuelExpanded\"><Double/></Member><Member name=\"AOAGreenFlag\"><Boolean/>"
"</Member><Member name=\"AOAAmberFlag\"><Boolean/></Member><Member name=\"AOARedFlag\"><Boolean/></Member>"
"<Member name=\"HSI_Compass_Heading\"><Double/></Member><Member name=\"h_agl_flag_status\"><Boolean/></Member>"
"<Member name=\"roll_deg\"><Double/></Member><Member name=\"pitch_deg\"><Double/></Member><Member name=\"v_down_fpm\">"
"<Double/></Member></Struct></Module></MetaData>";
